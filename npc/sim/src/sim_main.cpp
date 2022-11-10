#include "cpu/cpu.h"

void init_monitor(int, char *[]);

int main(int argc, char *argv[]) {
  init_monitor(argc, argv);
  cpu_init();
  cpu_exec(-1);
  cpu_exit();
  return -1;
}