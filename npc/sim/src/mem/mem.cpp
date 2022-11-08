#include "mem/mem.h"
#include "commen.h"


// 128MB for npc
static uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {};


uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static uint64_t pmem_read(paddr_t addr, int len) {
  uint64_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, uint64_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  printf("addr = 0x%08x out of bound mem!\n", addr);
  assert(0);
}

uint64_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  // device to do
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, uint64_t data) {
  if (likely(in_pmem(addr))) return pmem_write(addr, len, data);
  // device to do
  out_of_bound(addr);
}
