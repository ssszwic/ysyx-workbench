#include "device/map.h"
#include "cpu/cpu.h"

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

#define IO_SPACE_MAX (2 * 1024 * 1024)

void init_map() {
  io_space = (uint8_t *) malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

uint8_t* new_space(int size) {
  // 8 bytes aligned
  assert(size % 8 == 0);
  uint8_t *p = p_space;
  // page aligned
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    log_write(true, ANSI_FMT("address (0x%08lx) is out of bound at pc = 0x%016lx\n", ANSI_FG_RED), addr, npc_cpu.pc);
  } 
  else {
    if(!(addr <= map->high && addr >= map->low)) {
      log_write(true, ANSI_FMT("address (0x%08lx) is out of bound {%s} [0x%016lx, 0x%016lx] at pc = 0x%016lx", ANSI_FG_RED), 
            addr, map->name, map->low, map->high, npc_cpu);
    }
  }
}

static void invoke_callback(io_callback_t c, uint32_t offset, uint8_t mask, bool is_write) {
  if (c != NULL) { c(offset, mask, is_write); }
}

uint64_t map_read(paddr_t addr, IOMap *map) {
  check_bound(map, addr);
  uint32_t offset = addr - map->low;
  invoke_callback(map->callback, offset, 0, false); // prepare data to read
  word_t ret = host_read((uint8_t *) map->space + offset, 8);
  return ret;
}

void map_write(paddr_t addr, uint64_t data, uint8_t mask, IOMap *map) {
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  assert(offset % 8 == 0);
  // write to map
  uint8_t data_byte;
  for (int i = 0; i < 8; i++) {
    if((mask >> i) % 2 == 1) {
      data_byte = (uint8_t) (data >> (8 * i)) & 0xFF;
      host_write((uint8_t *) map->space + offset + i, 1, data_byte);
    }
  }
  invoke_callback(map->callback, offset, mask, true);
}

