#ifndef __COMMEN_H__
#define __COMMEN_H__

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

//#define CONFIG_WAVE_ON

// mem
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000

typedef uint64_t vaddr_t;
typedef uint32_t paddr_t;

// branch prediction optimization gor gcc: tell gcc the probability of cond is true is larger
#define likely(cond)   __builtin_expect(cond, 1)
#define uunlikely(cond)   __builtin_expect(cond, 0)

#endif