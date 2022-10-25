/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

extern const char *regs[];

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  // pc: instruction that has just been executed
  bool same = true;
  // compare pc
  if (ref_r->pc != cpu.pc) {
    printf("pc (next instruction) error: \n");
    printf("ref pc: "FMT_WORD"\n", ref_r->pc);
    printf("dut pc: "FMT_WORD"\n", cpu.pc);
    same = false;
  }

  // compare 32 reg
  for (int i = 0; i < 32; i++) {
    if(ref_r->gpr[i] != cpu.gpr[i]) {
      printf("reg[%d] %s error: \n", i, regs[i]);
      printf("ref: "FMT_WORD"\n", ref_r->gpr[i]);
      printf("dut: "FMT_WORD"\n", cpu.gpr[i]);
      same = false;
    }
  }

  return same;
}

void isa_difftest_attach() {
}
