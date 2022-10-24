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

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
// PG_ALIGN: specify the alignment format 4096
// all 128MB
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

// memort trace
#define M_RING_BUF_WIDTH 1000
static char m_ring_buf[M_RING_BUF_WIDTH][100] = {};
static int m_ring_ref = M_RING_BUF_WIDTH - 1;

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  // randomize initial storage contents
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
  // memory trace
  char tmp[50] = {};
  memset(m_ring_buf[m_ring_ref], ' ', 6);
  if (++m_ring_ref == M_RING_BUF_WIDTH) {m_ring_ref = 0;}
  sprintf(tmp, "----> read \t%016x\t\t%02d\n", addr, len);
  strcpy(m_ring_buf[m_ring_ref], tmp);

  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  // memory trace
  char tmp[50] = {};
  memset(m_ring_buf[m_ring_ref], ' ', 6);
  if (++m_ring_ref == M_RING_BUF_WIDTH) {m_ring_ref = 0;}
  sprintf(tmp, "----> write\t%016x\t\t%02d\n", addr, len);
  strcpy(m_ring_buf[m_ring_ref], tmp);

  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}

void memory_trace_print() {
  printf("\nmemory trace ring buff\n");
  for (int i = 0; i < M_RING_BUF_WIDTH; i++) {
    printf("%s\n", m_ring_buf[i]);
  }
  printf("\n");
}
