#include "mem/mem.h"
#include "commen.h"


// 128MB for npc
static uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }
void cpu_exit();

// static uint64_t pmem_read(paddr_t addr, int len) {
//   uint64_t ret = host_read(guest_to_host(addr), len);
//   return ret;
// }

// static void pmem_write(paddr_t addr, int len, uint64_t data) {
//   host_write(guest_to_host(addr), len, data);
// }

static void out_of_bound(paddr_t addr) {
  cpu_exit();
  printf("addr = 0x%08x out of bound mem!\n", addr);
  assert(0);
}

extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  uint32_t paddr = raddr & ~0x7;
  if (likely(in_pmem(paddr))) {
    *rdata = host_read(guest_to_host(paddr), 8);
    return;
  }
  out_of_bound(paddr);
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  printf("waddr: 0x%llx\n", waddr);
  printf("wdata: 0x%llx\n", wdata);
  printf("mask: 0x%x\n", wmask);
  uint32_t paddr = waddr & ~0x7;
  uint8_t data_byte;
  if (likely(in_pmem(paddr))) {
    for (int i = 0; i < 8; i++) {
      if((wmask >> i) % 2 == 1) {
        data_byte = (uint8_t) (wdata >> (8 * i)) & 0xFF;
        host_write(guest_to_host(paddr + i), 1, data_byte);
      }
    }
    return;
  }
  out_of_bound(paddr);
}



// uint64_t paddr_read(paddr_t addr, int len, bool *success) {
//   if (likely(in_pmem(addr))) {
//     return pmem_read(addr, len);
//   }
//   else {
//     printf("addr = 0x%08x out of bound mem!\n", addr);
//     *success = false;
//     return 0;
//   }
//   // device to do
//   // out_of_bound(addr);

// }

void paddr_write(paddr_t addr, int len, uint64_t data, bool *success) {
  if (likely(in_pmem(addr))) {
    return pmem_write(addr, len, data);
  }
  else {
    printf("addr = 0x%08x out of bound mem!\n", addr);
    *success = false;
    return ;
  }
  // device to do
  // out_of_bound(addr);
}
