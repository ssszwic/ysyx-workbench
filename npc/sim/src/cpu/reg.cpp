#include "commen.h"
#include "cpu/cpu.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

// print white color for error data
void isa_reg_display(bool *err_list) {
  // pc reg
  printf(ANSI_FMT("CPU register state: \n", ANSI_FG_BLUE));
  printf("pc:  0x%016lx\t  ", *npc_cpu.pc);
  if(err_list[33]) {
    printf(ANSI_FMT("npc: 0x%016lx\n", ANSI_FG_RED), npc_cpu.next_pc);
  }
  else {
    printf("npc: 0x%016lx\n", npc_cpu.next_pc);
  }
  
  // normal 32 reg
  int i = 0;
  while (i < 32) {
    for (int j = 0; j < 4; j++) {
      if(err_list[i]) {
        printf(ANSI_FMT("%-5s0x%016lx  ", ANSI_FG_RED), regs[i], *(npc_cpu.gpr + i));
      }
      else {
        printf("%-5s0x%016lx  ", regs[i], *(npc_cpu.gpr + i));
      }
      i++;
    }
    printf("\n");
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