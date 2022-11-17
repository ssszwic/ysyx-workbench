#ifndef __DIFFTEST_H__
#define __DIFFTEST_H__

#include "commen.h"

#ifdef DIFFTEST

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

extern void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction);
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_raise_intr)(uint64_t NO);
// extern void (*ref_difftest_init)();

// CPU state is different between nemu and npc
typedef struct {
  // uint_64 for riscv64
  word_t gpr[32];
  vaddr_t pc;
} NEMUCPUState;

#endif

#endif