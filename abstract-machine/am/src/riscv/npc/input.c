#include <am.h>
#include "npc.h"
#include "riscv/riscv.h"
#include <klib.h>

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t data = (uint32_t) inl(KBD_ADDR);
  printf("%x\n", KBD_ADDR);
  kbd->keydown = (data & 0xff00) == 0x8000;
  kbd->keycode = data & 0x00ff;
}