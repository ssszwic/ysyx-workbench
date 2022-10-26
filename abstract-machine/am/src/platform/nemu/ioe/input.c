#include <am.h>
#include <nemu.h>
#define KEYDOWN_MASK 0x8000
int printf(const char *fmt, ...);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t data = (uint32_t) inl(KBD_ADDR);
  if (data != 0) {
    printf("data: %04x\n", data);
  }
  
  kbd->keydown = 1;
  kbd->keycode = 0;
  // kbd->keydown = (data & 0xff00) == 0x8000;
  // kbd->keycode = data;
}
