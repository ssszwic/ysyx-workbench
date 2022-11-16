#include "mem/mem.h"
#include "commen.h"
#include "device/mmio.h"


// 128MB for npc
static uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {};


uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }
void cpu_exit();
uint64_t get_time();

#ifdef CONFIG_MEMORY_TRACE
#define MEM_RING_BUF_WIDTH 300
#define MAX_SINGLE_WIDTH 80
static char mem_ring_buf[MEM_RING_BUF_WIDTH][MAX_SINGLE_WIDTH] = {};
static int mem_ring_ref = MEM_RING_BUF_WIDTH - 1;
// erda or write twice every cycle, only trace once
#endif

static bool flip = false;

static void out_of_bound(vaddr_t addr) {
  cpu_exit();
  log_write(true, "addr = 0x%016lx out of bound mem!\n", addr);
  assert(0);
}

// only for instruction read, no memory trace
extern "C" void inst_pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  uint64_t paddr = raddr & ~0x7;
  if (likely(in_pmem(paddr))) {
    *rdata = host_read(guest_to_host(paddr), 8);
    return;
  }
  out_of_bound(paddr);
}

extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  flip = !flip;
  // memory trace
#ifdef CONFIG_MEMORY_TRACE
  if(flip) {
    char tmp[MAX_SINGLE_WIDTH] = {};
    memset(mem_ring_buf[mem_ring_ref], ' ', 6);
    if (++mem_ring_ref == MEM_RING_BUF_WIDTH) {mem_ring_ref = 0;}
    sprintf(tmp, "----> read \t0x%016llx\t0x%016llx", raddr, *rdata);
    strcpy(mem_ring_buf[mem_ring_ref], tmp);
  }
#endif

  uint64_t paddr = raddr & ~0x7;
  if (likely(in_pmem(paddr))) {
    *rdata = host_read(guest_to_host(paddr), 8);
    return;
  }
  
#ifdef CONFIG_DEVICE
  // *rdata = mmio_read(paddr);
  if(raddr == CONFIG_TIMER_MMIO) {*rdata = get_time();}
  return;
#endif

  out_of_bound(paddr);
}

extern "C" void pmem_write(long long waddr, long long wdata, uint8_t wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  flip = !flip;
  // memory trace
#ifdef CONFIG_MEMORY_TRACE
  if(flip) {
    char tmp[MAX_SINGLE_WIDTH] = {};
    memset(mem_ring_buf[mem_ring_ref], ' ', 6);
    if (++mem_ring_ref == MEM_RING_BUF_WIDTH) {mem_ring_ref = 0;}
    sprintf(tmp, "----> write\t0x%016llx\t0x%016llx\t0x%02x", waddr, wdata, wmask);
    strcpy(mem_ring_buf[mem_ring_ref], tmp);
  }
#endif

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

  // device
#ifdef CONFIG_DEVICE
  // // write once every cycle
  // if(flip) {mmio_write(paddr, wdata, wmask);}
  if(flip && waddr == CONFIG_SERIAL_MMIO) {uint8_t ch = uint8_t (wdata); putc(ch, stderr);}
  return;
#endif

  out_of_bound(paddr);
}

uint32_t get_inst(vaddr_t paddr) {
  if (likely(in_pmem(paddr))) {
    return host_read(guest_to_host(paddr), 4);
  }
  log_write(true, "get insttruction addr = 0x%08lx out of bound mem!\n", paddr);
  assert(0);
  return 0;
}

// expr
uint64_t extern_pmem_read(vaddr_t raddr, int len) {
  if (likely(in_pmem(raddr))) {
    return host_read(guest_to_host(raddr), len);
  }
  out_of_bound(raddr);
  return 0;
}

#ifdef CONFIG_MEMORY_TRACE
void log_mem_ring(bool print_screen) {
  if(mem_ring_buf[0][0] == '\0') {
    log_write(print_screen, ANSI_FMT("memory ring buff is empty.", ANSI_FG_YELLOW));
    log_write(print_screen, "\n");
    return;
  }
  log_write(print_screen, ANSI_FMT("memory ring buff.", ANSI_FG_BLUE));
  log_write(print_screen, "\n");
  log_write(print_screen, ANSI_FMT("      op\taddr\t\t\tdata\t\t\tmask\n", ANSI_FG_BLUE));
  for (int i = 0; i < MEM_RING_BUF_WIDTH; i++) {
    if(mem_ring_buf[i][0] == '\0') break;
    log_write(print_screen, "%s\n", mem_ring_buf[i]);
  }
  log_write(print_screen, "\n");
}
#endif


