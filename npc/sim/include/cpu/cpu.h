#ifndef __CPU_H__
#define __CPU_H__

#include "verilated_vcd_c.h"
#include <cstdlib>
#include <memory>
#include <verilated.h>
#include "VTop.h"
#include "commen.h"
#include "mem/mem.h"
#include "svdpi.h"
#include "VTop__Dpi.h"
#include "verilated_dpi.h"

enum { NPC_INIT, NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;

typedef struct {
  // uint_64 for riscv64
  uint64_t *gpr;
  vaddr_t *pc;
  uint32_t inst;
  vaddr_t next_pc;
  #ifdef CONFIG_ITRACE
  char logbuf[128];
  #endif
} CPUState;

extern NPCState npc_state;
extern CPUState npc_cpu;

void cpu_init();
void cpu_exit();
void cpu_exec(uint64_t n);

#endif