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

static VTop* top;

extern "C" int cpu_inst_ebreak() {
  printf("time: %ld\n", contextp->time());
  printf("ok\n");
  return 0;
}

// current file function
void init();
void sim_init();
void eval_and_wave();
void sim_exit();
uint64_t cpu_read(paddr_t addr, int len_code);
void cpu_write(paddr_t addr, int len_code, uint64_t data);

void isa_init();


int main(int argc, char** argv, char** env) {
  sim_init();
  init();
  // initial signal
  top->io_cpuEn = 0;
  top->reset = 1;
  top->clock = 1;
  top->io_instData = 0;
  top->io_rData = 0;

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
      top->io_instData = cpu_read(top->io_instAddr, 2);
      top->eval();
      // read mem
      if(top->io_ren) { top->io_rData = cpu_read(top->io_rAddr, top->io_length); }
      // write mem
      if(top->io_wen) { cpu_write(top->io_wAddr, top->io_length, top->io_wData); }
      eval_and_wave();
    }
    // negedge clk
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

uint64_t cpu_read(paddr_t addr, int len_code) {
  bool success = true;
  int len = 0;
  switch (len_code) {
    case 0: len = 1; break;
    case 1: len = 2; break;
    case 2: len = 4; break;
    case 3: len = 8; break;
    default: printf("len_code=%d out of range!(0 1 2 3)\n", len_code); sim_exit(); assert(0);
  }
  uint64_t data = paddr_read(addr, len, &success);
  if(!success) {sim_exit(); assert(0);}
  return data;
}

void cpu_write(paddr_t addr, int len_code, uint64_t data) {
  bool success = true;
  int len = 0;
  switch (len_code) {
    case 0: len = 1; break;
    case 1: len = 2; break;
    case 2: len = 4; break;
    case 3: len = 8; break;
    default: printf("len_code=%d out of range!(0 1 2 3)\n", len_code); sim_exit(); assert(0);
  }
  paddr_write(addr, len, data, &success);
  if(!success) {sim_exit(); assert(0);}
}

