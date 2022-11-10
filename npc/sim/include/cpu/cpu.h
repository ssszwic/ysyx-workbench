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

enum { NPC_INIT, NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

static VTop* top;
static int state = NPC_INIT;

void cpu_init();
void cpu_exit();
void cpu_exec(uint64_t n);

#endif