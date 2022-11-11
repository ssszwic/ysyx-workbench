#include "cpu/cpu.h"

extern "C" void init_monitor(int, char *[]);

int main(int argc, char *argv[]) {
  init_monitor(argc, argv);
  cpu_init();
  cpu_exec(-1);
  cpu_exit();
  if(npc_state.halt_ret != 0) {return 1;}
  return 0;
}