#include <am.h>
#include <nemu.h>
static uint32_t old_data = 0;
#define KEYDOWN_MASK 0x8000
int printf(const char *fmt, ...);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t data = (uint32_t) inl(KBD_ADDR);
  if (data != old_data) {
    printf("data: %04x\n", data);
    old_data = data;
  }
  
  kbd->keydown = 1;
  kbd->keycode = 0;
  // kbd->keydown = (data & 0xff00) == 0x8000;
  // kbd->keycode = data;
}
