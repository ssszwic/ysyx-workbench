#include "cpu/cpu.h"


void init_monitor(int, char *[]);
void sdb_mainloop();

int main(int argc, char *argv[]) {
  init_monitor(argc, argv);

  sdb_mainloop();

  cpu_exit();
  log_exit();
  if(npc_state.halt_ret != 0) {return 1;}
  return 0;
}