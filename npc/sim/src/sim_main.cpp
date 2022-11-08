#include "verilated_vcd_c.h"
#include <cstdlib>
#include <memory>
#include <verilated.h>
#include "VTop.h"
#include "commen.h"
#include "mem/mem.h"

#define RESET_TIME 20
#define SIM_TIME 100

VerilatedContext* contextp = NULL;
#ifdef CONFIG_WAVE_ON
VerilatedVcdC* tfp = NULL;
#endif

static VTop* top;

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
    top->reset = 1;
    top->clock = 1;
    top->io_instData = 0;
    top->io_rData = 0;

    while(contextp->time() < RESET_TIME) {
      top->clock = !top->clock;
      eval_and_wave();
      contextp->timeInc(1);
    }

    top->io_instData = paddr_read(top->io_instAddr, 4);
    top->reset = 0;

    while(contextp->time() < SIM_TIME) {
      top->clock = !top->clock;
      top->eval();
      // posedge clk
      if (top->clock) {
        // write mem (last instruction)
        if(top->io_wen) {printf("write\n"); paddr_write(top->io_wAddr, top->io_length, top->io_wData);}
        // update inst
        printf("read\n"); 
        top->io_instData = paddr_read(top->io_instAddr, 4);
        eval_and_wave();
        // read mem
        // top->io_rData = paddr_read(top->io_rAddr, top->io_length);
      }
      else {
        eval_and_wave();
      }
      contextp->timeInc(1);
    }

    eval_and_wave();

    

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
  #ifdef CONFIG_WAVE_ON
    tfp->close();
  #endif
}