#include "verilated_vcd_c.h"
#include <cstdlib>
#include <memory>
#include <verilated.h>
#include "VTop.h"
#include "commen.h"
#include "mem/mem.h"

VerilatedContext* contextp = NULL;
#ifdef CONFIG_WAVE_ON
VerilatedVcdC* tfp = NULL;
#endif

static VTop* top;

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

void isa_init();
void init();

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
#ifdef CONFIG_WAVE_ON
  tfp->dump(contextp->time());
#endif
}

void sim_exit(){
  step_and_dump_wave();
#ifdef CONFIG_WAVE_ON
  tfp->close();
#endif
}

int main(int argc, char** argv, char** env) {
    sim_init();
    init();

    step_and_dump_wave();

    sim_exit();
}

void init() {
  isa_init();
}