#include "cpu/cpu.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  int i;
  // pc reg
  printf("%-12s", "pc");
  printf("0x%016lx    ", cpu.pc);
  printf("%ld\n", cpu.pc);
  // normal 32 reg
  for (i = 0; i < 32; i++) {
    printf("%-12s", reg_name(i, 0));
    printf("0x%016lx    ", gpr(i));
    printf("%ld\n", gpr(i));
  }
}

uint64_t isa_reg_str2val(const char *s, bool *success) {
  // pc reg
  if (strcmp(s, "pc") == 0){
    *success = true;
    return cpu.pc;
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
    return gpr(i);
  }
}