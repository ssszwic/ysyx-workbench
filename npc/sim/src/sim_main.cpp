#include "verilated_vcd_c.h"
#include <cstdlib>
#include <memory>
#include <verilated.h>
#include "VTop.h"
#include "commen.h"
#include "mem/mem.h"
#include "svdpi.h"
#include "VTop__Dpi.h"

#define RESET_TIME 20
#define SIM_TIME 100

VerilatedContext* contextp = NULL;
#ifdef CONFIG_WAVE_ON
VerilatedVcdC* tfp = NULL;
#endif

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

static VTop* top;
static int state = NPC_RUNNING;

extern "C" void cpu_inst_ebreak() {
  state = NPC_END;
}

// current file function
void init();
void sim_init();
void eval_and_wave();
void sim_exit();

void isa_init();


int main(int argc, char** argv, char** env) {
  sim_init();
  init();
  // initial signal
  top->io_cpuEn = 0;
  top->reset = 1;
  top->clock = 1;
  eval_and_wave();
  

  while(contextp->time() < RESET_TIME) {
    top->clock = !top->clock;
    eval_and_wave();
    contextp->timeInc(1);
  }

  top->reset = 0;

  while(contextp->time() < SIM_TIME) {
    top->clock = !top->clock;
    
    // posedge clk
    if (top->clock) {
      // update pc register
      top->eval();
      // enable cpu (avoid pc reg change)
      top->io_cpuEn = 1;
      // update inst
      eval_and_wave();
      if (state == NPC_END) {sim_exit(); return 0;}
    }
    // negedge clk
    else {
      eval_and_wave();
    }
    contextp->timeInc(1);
  }

  sim_exit();
}

void init() {
  // load default img
  isa_init();
}

void sim_init(){
    contextp = new VerilatedContext;
    top = new VTop;
    #ifdef CONFIG_WAVE_ON
    tfp = new VerilatedVcdC;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("wave.vcd");
    #endif
}

void eval_and_wave(){
  top->eval();
  #ifdef CONFIG_WAVE_ON
  tfp->dump(contextp->time());
  #endif
}

void sim_exit(){
  printf("save wave\n");
  #ifdef CONFIG_WAVE_ON
    tfp->close();
  #endif
}