#include "verilated_vcd_c.h"
#include <cstdlib>
#include <memory>
#include <verilated.h>
#include "VTop.h"

VerilatedContext* contextp = NULL;
// VerilatedVcdC* tfp = NULL;

static VTop* top;

void sim_init(){
    contextp = new VerilatedContext;
    top = new VTop;
    // tfp = new VerilatedVcdC;
    // contextp->traceEverOn(true);
    // top->trace(tfp, 0);
    // tfp->open("dump.vcd");
}

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  // tfp->dump(contextp->time());
}

void sim_exit(){
  step_and_dump_wave();
  // tfp->close();
}

int main(int argc, char** argv, char** env) {
    sim_init();

    step_and_dump_wave();

    sim_exit();
}
