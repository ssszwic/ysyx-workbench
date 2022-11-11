#include "cpu/cpu.h"

#define RESET_TIME 20
#define SIM_TIME 100

static VTop* top;
static VerilatedContext* contextp = NULL;
#ifdef CONFIG_WAVE_ON
static VerilatedVcdC* tfp = NULL;
#endif

NPCState npc_state = { .state = NPC_INIT };
CPUState cpu = { .gpr = NULL };

// current file function
static void eval_and_wave();
static void isa_exec_once();
static void exec_once();
static void trace_and_difftest();
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
  for(int i = 0; i < n; i++) {
    exec_once();
    trace_and_difftest();
    if(npc_state.state == NPC_END) {break;}
  }
  if (npc_state.halt_ret == 0) {
    printf(ANSI_FMT("HIT GOOD TRAP\n", ANSI_FG_GREEN));
  }
  else {
    printf(ANSI_FMT("HIT BAD TRAP\n", ANSI_FG_RED));
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
  for(int i = 4; i > 0; i--) {
    p += snprintf(p, sizeof(cpu.logbuf), "%02x ", *(inst_byte + i));
  }

  


  disassemble(p, cpu.logbuf + sizeof(cpu.logbuf) - p, *cpu.pc, inst_byte, 4);

  printf("%s\n", cpu.logbuf);
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
  if(npc_state.state == NPC_INIT) {
    // update pc register
    top->eval();
    // enable cpu (avoid pc reg change)
    top->io_cpuEn = 1;
    npc_state.state = NPC_RUNNING;
  }
  // update inst
  eval_and_wave();
  contextp->timeInc(1);
  top->clock = !top->clock;
  eval_and_wave();
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
    printf("save wave successful!\n");
    tfp->close();
  #endif
}
