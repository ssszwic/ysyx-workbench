#include "cpu/cpu.h"

#define RESET_TIME 20
#define SIM_TIME 100

// instruction ring buff
#ifdef CONFIG_ITRACE
#define INST_RING_BUF_WIDTH 30
static char inst_ring_buf[INST_RING_BUF_WIDTH][100] = {};
static int inst_ring_ref = INST_RING_BUF_WIDTH - 1;
#endif

static VTop* top;
static VerilatedContext* contextp = NULL;
#ifdef CONFIG_WAVE_ON
static VerilatedVcdC* tfp = NULL;
#endif

// only for cmd si, print inst to screen
bool screen_display_inst = false;
NPCState npc_state = { .state = NPC_STOP };
CPUState cpu = { .gpr = NULL };
// Ensure cpu initialization is complete
static bool cpu_state_init = false;

// current file function
static void eval_and_wave();
static void isa_exec_once();
static void exec_once();
static void trace_and_difftest();

bool update_wp(char *log);
#ifdef CONFIG_ITRACE
void log_inst_ring(bool print_screen);
#endif
#ifdef CONFIG_MEMORY_TRACE
void log_mem_ring(bool print_screen);
#endif

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu.gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void set_pc_ptr(const svOpenArrayHandle r) {
  cpu.pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// DPI_C
extern "C" void cpu_inst_ebreak() {
  // half = $a0
  npc_state.halt_ret = *(cpu.gpr + 10);
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
    }
    else {
      log_write(true, ANSI_FMT("HIT BAD TRAP\n", ANSI_FG_RED));
    }
#ifdef CONFIG_ITRACE
    // only print to log
    log_inst_ring(false);
#endif

#ifdef CONFIG_MEMORY_TRACE
    // only print to log
    log_mem_ring(true);
#endif
  }
}

void exec_once() {
  isa_exec_once();
}

void trace_and_difftest() {
  // itrace
#ifdef CONFIG_ITRACE
  char *p = cpu.logbuf;

  p += snprintf(p, sizeof(cpu.logbuf), "0x%016lx:  ", *cpu.pc);
  // print from MSB
  uint32_t inst = get_inst(*cpu.pc);
  uint8_t *inst_byte = (uint8_t *) &inst;
  for(int i = 3; i >= 0; i--) {
    p += snprintf(p, sizeof(cpu.logbuf), "%02x ", *(inst_byte + i));
  }

  disassemble(p, cpu.logbuf + sizeof(cpu.logbuf) - p, *cpu.pc, inst_byte, 4);
  log_write(screen_display_inst, "%s\n", cpu.logbuf);

  // instruction ring buff
  memset(inst_ring_buf[inst_ring_ref], ' ', 6); // copy 5 'space' to cover '---->'
  if (++inst_ring_ref == INST_RING_BUF_WIDTH) {inst_ring_ref = 0;}
  strcpy(inst_ring_buf[inst_ring_ref], "----> "); 
  strcpy(inst_ring_buf[inst_ring_ref] + 6, cpu.logbuf);

  #ifdef CONFIT_WATCHPOINT
  if(update_wp(cpu.logbuf)) { npc_state.state = NPC_STOP; }
  #endif

#endif
}

void cpu_init() {
  contextp = new VerilatedContext;
  top = new VTop;
  #ifdef CONFIG_WAVE_ON
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
  printf("once\n");
  eval_and_wave();
  printf("once\n");
  contextp->timeInc(1);
  top->clock = !top->clock;
  printf("once\n");
  eval_and_wave();
  printf("once\n");
  contextp->timeInc(1);
}

static void eval_and_wave(){
  top->eval();
  #ifdef CONFIG_WAVE_ON
  tfp->dump(contextp->time());//
  #endif
}

void cpu_exit(){
  #ifdef CONFIG_WAVE_ON
  tfp->dump(contextp->time());//
  #endif
  #ifdef CONFIG_WAVE_ON
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
