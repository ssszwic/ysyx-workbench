#include "commen.h"
#include "cpu/cpu.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  // pc reg
  printf("%-12s", "pc");
  printf("0x%016lx\t", *npc_cpu.pc);
  printf("%ld\n", *npc_cpu.pc);
  // normal 32 reg
  for (int i = 0; i < 32; i++) {
    printf("%-12s", regs[i]);
    printf("0x%016lx\t", *(npc_cpu.gpr + i));
    printf("%ld\n", *(npc_cpu.gpr + i));
  }
}

uint64_t isa_reg_str2val(const char *s, bool *success) {
  // pc reg
  if (strcmp(s, "pc") == 0){
    *success = true;
    return *npc_cpu.pc;
  }
  // noemal reg
  int i = 0;
  for (i = 0; i < 32; i++) {
    if(strcmp(s, regs[i]) == 0) {
      break;
    }
  }
  if (i == 32) {
    *success = false;
    return 0;
  }
  else {
    *success = true;
    return *(npc_cpu.gpr + i);
  }
}