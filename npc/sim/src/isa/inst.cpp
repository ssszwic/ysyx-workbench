#include "mem/mem.h"

static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x0002b823,  // sd  zero,16(t0)
  0x0102b503,  // ld  a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  // 0xdeadbeef,  // some data
};

void isa_init() {
  // Copy the above img to pmem, RESET_VECTOR is pc's initial address
  // This img will be coverd if there is a new elf file
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
}