#ifndef __MEM_H__
#define __MEM_H__
#include "commen.h"

#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR PMEM_LEFT

uint64_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, uint64_t data);

/* convert the guest physical address in the guest program to host virtual address in npc */
uint8_t* guest_to_host(paddr_t paddr);

static inline uint64_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint32_t *)addr;
    default: assert(0);
  }
  return 0;
}

static inline void host_write(void *addr, int len, uint64_t data) {
  switch (len) {
    // default intercepting low bits
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    default: assert(0);
  }
  return;
}

static inline bool in_pmem(paddr_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}

#endif