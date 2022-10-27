#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
int printf(const char *fmt, ...);
void __am_gpu_init() {
  uint32_t data = (uint32_t) inl(VGACTL_ADDR);
  int width = data >> 16;
  int height = data & 0x0000ffff;
  int i;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < width * height; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t data = (uint32_t) inl(VGACTL_ADDR);
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = data >> 16, 
    .height = data & 0x0000ffff,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t data = (uint32_t) inl(VGACTL_ADDR);
  int width = data >> 16;
  int height = data & 0x0000ffff;

  // uint32_t *addr = NULL;
  // uint32_t *pixels_tmp = (uint32_t *) ctl->pixels;
  // // check out-of-bounds
  // if((ctl->x + ctl->w > width) || (ctl->y + ctl->h > height)) {
  //   panic("out of display range");
  // }
  // // transform pixel data
  // for (int j = 0; j < ctl->h; j++) {
  //   addr = (uint32_t *) FB_ADDR + width * (j + ctl->y) + ctl->x;
  //   for (int i = 0; i < ctl->w; i++) {
  //     outl((uintptr_t) addr++, *pixels_tmp++);
  //   }
  // }

  if((ctl->x + ctl->w > width) || (ctl->y + ctl->h > height)) {
    panic("out of display range");
  }
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t *pixels_tmp = (uint32_t *) ctl->pixels;
  fb += width * ctl->y + ctl->x;
  for (int j = 0; j < ctl->h; j++) {
    fb += width - ctl->w - 1;
    for (int i = 0; i < ctl->w; i++) {
      outl((uintptr_t) fb++, *pixels_tmp++);
    }
  }
  // update
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
