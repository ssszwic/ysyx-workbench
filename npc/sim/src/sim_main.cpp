#include "cpu/cpu.h"

void isa_init();

int main(int argc, char *argv[]) {
  isa_init();
  cpu_init();
  cpu_exec(-1);
  cpu_exit();
  return 0;
}