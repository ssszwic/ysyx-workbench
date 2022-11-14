#include "cpu/cpu.h"
#include <elf.h>

#define RESET_TIME 21
#define SIM_TIME 100

static VTop* top;
static VerilatedContext* contextp = NULL;

// instruction ring buff
#ifdef CONFIG_ITRACE
  #define INST_RING_BUF_WIDTH 30
  static char inst_ring_buf[INST_RING_BUF_WIDTH][100] = {};
  static int inst_ring_ref = INST_RING_BUF_WIDTH - 1;
  void log_inst_ring(bool print_screen);
#endif

#ifdef CONFIG_MEMORY_TRACE
  void log_mem_ring(bool print_screen);
#endif

#ifdef CONFIG_WAVE
  static VerilatedVcdC* tfp = NULL;
#endif

#ifdef CONFIG_FUNCTION_TRACE
  // the list to store function
  #define MAX_FUNC_NAME_WIDTH 50  // max function name length, the excess will be stage
  #define FUNC_LIST_NUM 100       // max function number
  struct func {
    int id;
    size_t size;
    vaddr_t start_addr;
    char name[MAX_FUNC_NAME_WIDTH];
  };
  static struct func func_list[FUNC_LIST_NUM];
  // the function trace buff
  #define FUNC_RING_BUF_WIDTH 100
  #define SINGLE_BUF_WIDTH (FUNC_LIST_NUM + 50)
  // ring buf
  static char func_ring_buf[FUNC_RING_BUF_WIDTH][SINGLE_BUF_WIDTH] = {};
  // ring buf ref
  static int func_ring_ref = FUNC_RING_BUF_WIDTH - 1;
  static int func_pc(vaddr_t addr);
  // num of function
  static int ref = 0;
  // next pc
  static int func_state   = -2;  // initial state, -2: no function
  static bool jal         = false;
  static bool jalr        = false;
  static void log_func_list(bool print_screen);
  void log_func_ring(bool print_screen);
#endif

#ifdef CONFIG_DIFFTEST
RegWrite reg_write;
#endif

// only for cmd si, print inst to screen
bool screen_display_inst = false;
NPCState npc_state = { .state = NPC_STOP };
CPUState npc_cpu = { .gpr = NULL };
static uint64_t *rtl_pc;
static uint64_t *rtl_gpr;
// Ensure cpu initialization is complete
static bool cpu_state_init = false;

// current file function
static void eval_and_wave();
static void isa_exec_once();
static void exec_once();
static void trace_and_difftest();
static void log_trace(bool print_screen);
void difftest_step();



bool update_wp(char *log);

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  rtl_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void set_pc_ptr(const svOpenArrayHandle r) {
  rtl_pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// DPI_C
extern "C" void cpu_inst_ebreak() {
  // half = $a0
  npc_state.halt_ret = *(npc_cpu.gpr + 10);
  npc_state.state = NPC_END;
}

void cpu_exec(uint64_t n) {
  // program end or error
  if(npc_state.state == NPC_END || npc_state.state == NPC_ABORT) {
    printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
    return;
  }

  npc_state.state = NPC_RUNNING;
  for(int i = 0; i < n; i++) {
    exec_once();
    trace_and_difftest();
    if(npc_state.state == NPC_END || npc_state.state == NPC_STOP) {break;}
  }

  if(npc_state.state == NPC_END) {
    if (npc_state.halt_ret == 0) {
      log_write(true, ANSI_FMT("HIT GOOD TRAP\n", ANSI_FG_GREEN));
      // for return successful, don't print to screen
      log_trace(false);
    }
    else {
      log_write(true, ANSI_FMT("HIT BAD TRAP\n", ANSI_FG_RED));
      log_trace(true);
    }
  }
  else if(npc_state.state == NPC_ABORT) {
    log_trace(true);
  }
}

static void log_trace(bool print_screen) {
  #ifdef CONFIG_ITRACE
    // only print to log
    log_inst_ring(print_screen);
  #endif
  #ifdef CONFIG_MEMORY_TRACE
    // only print to log
    log_mem_ring(print_screen);
  #endif
  #ifdef CONFIG_FUNCTION_TRACE
    // only print to log
    log_func_ring(print_screen);
  #endif
}

void exec_once() {
  isa_exec_once();
}

void trace_and_difftest() {
// itrace
#ifdef CONFIG_ITRACE
  char *p = npc_cpu.logbuf;
  p += snprintf(p, sizeof(npc_cpu.logbuf), "0x%016lx:  ", npc_cpu.pc);
  // print from MSB
  uint32_t inst = get_inst(npc_cpu.pc);
  uint8_t *inst_byte = (uint8_t *) &inst;
  for(int i = 3; i >= 0; i--) {
    p += snprintf(p, sizeof(npc_cpu.logbuf), "%02x ", *(inst_byte + i));
  }
  disassemble(p, npc_cpu.logbuf + sizeof(npc_cpu.logbuf) - p, npc_cpu.pc, inst_byte, 4);
  log_write(screen_display_inst, "%s\n", npc_cpu.logbuf);
  // instruction ring buff
  memset(inst_ring_buf[inst_ring_ref], ' ', 6); // copy 5 'space' to cover '---->'
  if (++inst_ring_ref == INST_RING_BUF_WIDTH) {inst_ring_ref = 0;}
  strcpy(inst_ring_buf[inst_ring_ref], "----> "); 
  strcpy(inst_ring_buf[inst_ring_ref] + 6, npc_cpu.logbuf);

  #ifdef CONFIT_WATCHPOINT
  if(update_wp(npc_cpu.logbuf)) { npc_state.state = NPC_STOP; }
  #endif
#endif

// function trace
#ifdef CONFIG_FUNCTION_TRACE
  // detect jump inst: JAL or JALR
  // JAL: enter function
  // JALR: leave function
  int id;
  char tmp[SINGLE_BUF_WIDTH] = {};
  if(func_state == -2) {
    // no function in elf or no elf
  }
  else if(func_state == -1) {
    // call initial function
    id = func_pc(*npc_cpu.pc);
    memset(func_ring_buf[func_ring_ref] + 12, ' ', 6);
    if (++func_ring_ref == FUNC_RING_BUF_WIDTH) {func_ring_ref = 0;}
    sprintf(tmp, "0x%08lx: ----> call [%s@0x%08lx] ", *npc_cpu.pc, func_list[id].name, func_list[id].start_addr);
    strcpy(func_ring_buf[func_ring_ref], tmp);
    func_state = id;
  }
  else if(jal) {
    // call function
    id = func_pc(npc_cpu.next_pc);
    memset(func_ring_buf[func_ring_ref] + 12, ' ', 6);
    if (++func_ring_ref == FUNC_RING_BUF_WIDTH) {func_ring_ref = 0;}
    sprintf(tmp, "0x%08lx: ----> call [%s@0x%08lx] ", *npc_cpu.pc, func_list[id].name, func_list[id].start_addr);
    strcpy(func_ring_buf[func_ring_ref], tmp);
    func_state = id;
  }
  else if(jalr) {
    // ret function
    id = func_pc(npc_cpu.next_pc);
    memset(func_ring_buf[func_ring_ref] + 12, ' ', 6);
    if (++func_ring_ref == FUNC_RING_BUF_WIDTH) {func_ring_ref = 0;}
    sprintf(tmp, "0x%08lx: ----> ret  [%s@0x%08lx] ", *npc_cpu.pc, func_list[id].name, func_list[id].start_addr);
    strcpy(func_ring_buf[func_ring_ref], tmp);
    func_state = id;
  }
#endif
// difftest
#ifdef CONFIG_DIFFTEST
  difftest_step();
#endif
}

void cpu_init() {
  contextp = new VerilatedContext;
  top = new VTop;
  #ifdef CONFIG_WAVE
  tfp = new VerilatedVcdC;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
  #endif

  // initial signal
  top->io_cpuEn = 0;
  top->reset = 1;
  top->clock = 0;

  // reset
  while(contextp->time() < RESET_TIME) {
    top->clock = !top->clock;
    eval_and_wave();
    contextp->timeInc(1);
  }
  top->reset = 0;

  if(!top->clock) {
    return ;
  }
  else {
    top->clock = !top->clock;
    eval_and_wave();
    contextp->timeInc(1);
    return ;
  }
}

static void isa_exec_once() {
  top->clock = !top->clock;
  // posedge clk
  if(!cpu_state_init) {
    // update pc register
    top->eval();
    // enable cpu (avoid pc reg change)
    top->io_cpuEn = 1;
    cpu_state_init = true;
  }
  // update inst
  eval_and_wave();
  contextp->timeInc(1);

  top->clock = !top->clock;
  eval_and_wave();
  contextp->timeInc(1);

  // update reg and pc, gpr(regfiles) will not update until next cycle, so update by io_regWen
  npc_cpu.pc = *rtl_pc;
  npc_cpu.next_pc = top->io_nextPC;
  for(int i = 0; i < 32; i++) {
    if((top->io_regWen == 1) && (i == top->io_regAddr)) {
      npc_cpu.gpr[i] = top->io_regWData;
    }
    else {
      npc_cpu.gpr[i] = *(rtl_gpr + i);
    }
  }

#ifdef CONFIG_FUNCTION_TRACE
  // upadte next pc
  jal = top->io_jalSel;
  jalr = top->io_jalrSel;
#endif

  
}

static void eval_and_wave(){
  top->eval();
  #ifdef CONFIG_WAVE
  tfp->dump(contextp->time());//
  #endif
}

void cpu_exit(){
  #ifdef CONFIG_WAVE
  tfp->dump(contextp->time());//
  #endif
  #ifdef CONFIG_WAVE
    log_write(true, "save wave successful!\n");
    tfp->close();
  #endif
}

#ifdef CONFIG_ITRACE
void log_inst_ring(bool print_screen) {
  if(inst_ring_buf[0][0] == '\0') {
    log_write(print_screen, ANSI_FMT("instruction ring buff is empty.", ANSI_FG_YELLOW));
    log_write(print_screen, "\n");
    return;
  }
  log_write(print_screen, ANSI_FMT("instruction ring buff.", ANSI_FG_BLUE));
  log_write(print_screen, "\n");
  for (int i = 0; i < INST_RING_BUF_WIDTH; i++) {
    if(inst_ring_buf[i][0] == '\0') break;
    log_write(print_screen, "%s\n", inst_ring_buf[i]);
  }
  log_write(print_screen, "\n");
}
#endif

#ifdef CONFIG_FUNCTION_TRACE
void init_elf(const char *file) {
  log_write(false, "read elf file\n");
  FILE *fp;
	fp = fopen(file, "r");
	if (NULL == fp)
	{
		printf("fail to open the file\n");
		assert(0);
	}
  // analysis head
  Elf64_Ehdr elf_head;
	int a;
  int i, j;
  char name[MAX_FUNC_NAME_WIDTH] = {};
  ref = 0;

  // read head
  // read data for stream
	a = fread(&elf_head, sizeof(Elf64_Ehdr), 1, fp);
	assert(a != 0);

  if (elf_head.e_ident[0] != 0x7F ||
		elf_head.e_ident[1] != 'E' ||
		elf_head.e_ident[2] != 'L' ||
		elf_head.e_ident[3] != 'F')
	{
		printf("Not a ELF file\n");
		assert(0);
	}

  // 解析section 分配内存 section * 数量
	Elf64_Shdr *start1 = (Elf64_Shdr*)malloc(sizeof(Elf64_Shdr) * elf_head.e_shnum);
  if (NULL == start1) { assert(0);}
  Elf64_Shdr *shdr = start1;
  Elf64_Shdr *sym_shdr = NULL;
  Elf64_Shdr *str_shdr = NULL;
	
	// set offset 
	a = fseek(fp, elf_head.e_shoff, SEEK_SET);
	assert(a == 0);

	// read section to shdr, size : shdr * num
	a = fread(shdr, sizeof(Elf64_Shdr) * elf_head.e_shnum, 1, fp);
	assert(a != 0);

  // find symbol table
  for (i = 0; i < elf_head.e_shnum; i++) {
    if (shdr->sh_type == 2) {
      sym_shdr = shdr;
    }
    else if (shdr->sh_type == 3) {
      // get first resdult when there are 2 section (type is 3)
      // .strtab is right and .shstrtab is wrong
      if (str_shdr == NULL) {
        str_shdr = shdr;
      }
    }
    shdr++;
  }
  assert(sym_shdr && str_shdr);

  Elf64_Sym *start2 = (Elf64_Sym*)malloc(sym_shdr->sh_size);
  assert(start2 != NULL);

  Elf64_Sym *sym = start2;
  // function numer
  int sym_num = sym_shdr->sh_size / 24;
  // point the file pointer to the beginning
  rewind(fp);
  fseek(fp, sym_shdr->sh_offset, SEEK_SET);
  a = fread(sym, sym_shdr->sh_size, 1,  fp);
	assert(a != 0);

  for(i = 0; i < sym_num; i++) {
    // symbol type is function
    if ((sym->st_info & 0xf) == 2) {
      rewind(fp);
      a = fseek(fp, str_shdr->sh_offset + sym->st_name, SEEK_SET);
	    assert(a == 0);
      a = fread(name, MAX_FUNC_NAME_WIDTH, 1, fp);
	    assert(a != 0);
      for (j = 0; j < MAX_FUNC_NAME_WIDTH; j++) {
        if (name[j] == '\0') {break;}
      }
      if (j == MAX_FUNC_NAME_WIDTH) {
        log_write(true, "ftrace: function name is too long, the excess will be stage\n");
        name[j-10] = '\0';
        // assert(0);
      }
      // limit num of func list
      if(ref == FUNC_LIST_NUM) {
        log_write(true, "ftrace: function is too much, more than %d!\n", FUNC_LIST_NUM);
        assert(0);
      }
      func_list[ref].id = ref;
      func_list[ref].start_addr = sym->st_value;
      func_list[ref].size = sym->st_size;
      strcpy(func_list[ref].name, name);
      ref++;
    }
    sym++;
  }
  free(start1);
  free(start2);
  start1 = NULL;
  start2 = NULL;
  fclose(fp);
  if(ref == 0) {
    log_write(true, "no function in elf file!\n");
    assert(0);
  }
  func_state = -1;
  log_write(false, "read elf file finfished\n");
  log_func_list(true);
}

// pc in which function
static int func_pc(vaddr_t addr) {
  for (int i = 0; i < ref; i++) {
    if(addr == func_list[i].start_addr || ((addr >= func_list[i].start_addr) && (addr < (func_list[i].start_addr + func_list[i].size)))) {
      return i;
    }
  }
  log_write(true, "0x%016lx no funciton match!\n", addr);
  assert(0);
  return 0;
}

static void log_func_list(bool print_screen) {
  log_write(print_screen, ANSI_FMT("function list:\n", ANSI_FG_BLUE));
  log_write(print_screen, "function number: %d\n", ref);
  for (int i = 0; i < ref; i++) {
    log_write(print_screen, "id: %d\n", func_list[i].id);
    log_write(print_screen, "name: \t\t%s\n", func_list[i].name);
    log_write(print_screen, "size: \t\t%ld\n", func_list[i].size);
    log_write(print_screen, "start addr: \t0x%016lx\n", func_list[i].start_addr);
    log_write(print_screen, "\n");
  }
}

void log_func_ring(bool print_screen) {
  if(func_ring_buf[0][0] == '\0') {
    log_write(print_screen, ANSI_FMT("function ring buff is empty.", ANSI_FG_YELLOW));
    log_write(print_screen, "\n");
    return;
  }
  log_write(print_screen, ANSI_FMT("function ring buff.", ANSI_FG_BLUE));
  log_write(print_screen, "\n");
  for (int i = 0; i < FUNC_RING_BUF_WIDTH; i++) {
    if(func_ring_buf[i][0] == '\0') break;
    log_write(print_screen, "%s\n", func_ring_buf[i]);
  }
  log_write(print_screen, "\n");
}

#endif
