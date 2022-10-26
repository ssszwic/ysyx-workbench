#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t data = (uint32_t) inl(KBD_ADDR);
  kbd->keydown = (data & 0xff00) == 0x8000;
  kbd->keycode = data;
}
