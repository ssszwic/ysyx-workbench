/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/host.h>
#include <memory/vaddr.h>
#include <device/map.h>

#define IO_SPACE_MAX (2 * 1024 * 1024)

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

// device trace
#ifdef CONFIG_DEVICE_TRACE
#define D_RING_BUF_WIDTH 300
static char d_ring_buf[D_RING_BUF_WIDTH][100] = {};
static int d_ring_ref = D_RING_BUF_WIDTH - 1;
#endif

void log_trace();

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    // printf log
    log_trace();
    Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu.pc);
  } else {
    Assert(addr <= map->high && addr >= map->low,
        "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        addr, map->name, map->low, map->high, cpu.pc);
  }
}

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
  io_space = malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

word_t map_read(paddr_t addr, int len, IOMap *map) {
  // device trace
#ifdef CONFIG_DEVICE_TRACE
  char tmp[100] = {};
  memset(d_ring_buf[d_ring_ref], ' ', 6);
  if (++d_ring_ref == D_RING_BUF_WIDTH) {d_ring_ref = 0;}
  sprintf(tmp, "----> read \t%s\t" FMT_PADDR "\t%02d", map->name, addr, len);
  strcpy(d_ring_buf[d_ring_ref], tmp);
#endif
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  invoke_callback(map->callback, offset, len, false); // prepare data to read
  word_t ret = host_read(map->space + offset, len);
  return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
#ifdef CONFIG_DEVICE_TRACE
  char tmp[100] = {};
  memset(d_ring_buf[d_ring_ref], ' ', 6);
  if (++d_ring_ref == D_RING_BUF_WIDTH) {d_ring_ref = 0;}
  sprintf(tmp, "----> write\t%s\t" FMT_PADDR "\t%02d", map->name, addr, len);
  strcpy(d_ring_buf[d_ring_ref], tmp);
#endif
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  host_write(map->space + offset, len, data);
  invoke_callback(map->callback, offset, len, true);
}

#ifdef CONFIG_DEVICE_TRACE
void device_trace_print() {
  printf("\ndevice trace ring buff:\n");
  printf("      opcode\tname\taddr\t\tlen\n");
  for (int i = 0; i < D_RING_BUF_WIDTH; i++) {
    if (d_ring_buf[i][0] == '\0') break;
    printf("%s\n", d_ring_buf[i]);
  }
  printf("\n");
}
#endif