#include "device/mmio.h"
#include "device/map.h"
#include "mem/mem.h"

#define NR_MAP 16

static IOMap maps[NR_MAP] = {};
static int nr_map = 0;

uint64_t mmio_read(paddr_t addr, int len);
void mmio_write(paddr_t addr, int len, word_t data);

static IOMap* fetch_mmio_map(paddr_t addr) {
  int mapid = find_mapid_by_addr(maps, nr_map, addr);
  return (mapid == -1 ? NULL : &maps[mapid]);
}

/* device interface */
void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len, io_callback_t callback) {
  assert(nr_map < NR_MAP);
  paddr_t left = addr, right = addr + len - 1;
  if (in_pmem(left) || in_pmem(right)) {
    log_write(true, ANSI_FMT("MMIO region %s@[0x%08lx, 0x%08lx] is overlapped with pmem\n", ANSI_FG_RED), name, left, right);
    assert(0);
  }
  for (int i = 0; i < nr_map; i++) {
    if (left <= maps[i].high && right >= maps[i].low) {
      log_write(true, ANSI_FMT("MMIO region %s@[0x%08lx, 0x%08lx] is overlapped with %s\n", ANSI_FG_RED), name, left, right, maps[i].name);
      assert(0);
    }
  }

  maps[nr_map] = (IOMap){ .name = name, .low = addr, .high = addr + len - 1,
    .space = space, .callback = callback };
  log_write(true, "Add mmio map '%s' at [0x%08lx, 0x%08lx]\n", maps[nr_map].name, maps[nr_map].low, maps[nr_map].high);
  nr_map ++;
}

/* bus interface */
uint64_t mmio_read(paddr_t addr) {
  return map_read(addr, fetch_mmio_map(addr));
}

void mmio_write(paddr_t addr, word_t data, uint8_t mask) {
  map_write(addr, data, mask, fetch_mmio_map(addr));
}

