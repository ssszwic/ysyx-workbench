#include "cpu/cpu.h"

#define RESET_TIME 20
#define SIM_TIME 100

VerilatedContext* contextp = NULL;
#ifdef CONFIG_WAVE_ON
VerilatedVcdC* tfp = NULL;
#endif

// DPI_C
extern "C" void cpu_inst_ebreak() {
  state = NPC_END;
}

// current file function
static void eval_and_wave();
static void exec_once();

void cpu_exec(uint64_t n) {
  for(int i = 0; i < n; i++) {
    exec_once();
    if(state == NPC_END) {break;}
  }
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

static void exec_once() {
  top->clock = !top->clock;
  // posedge clk
  if(state == NPC_INIT) {
    // update pc register
    top->eval();
    // enable cpu (avoid pc reg change)
    top->io_cpuEn = 1;
    state = NPC_RUNNING;
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
  tfp->dump(contextp->time());
  #endif
  #ifdef CONFIG_WAVE_ON
    printf("save wave successful!\n");
    tfp->close();
  #endif
}
