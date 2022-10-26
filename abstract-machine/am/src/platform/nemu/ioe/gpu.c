#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  uint32_t data = (uint32_t) inl(VGACTL_ADDR);
  int width = data >> 16;
  int height = data & 0xff00;
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
    .height = data & 0xff00,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t data = (uint32_t) inl(VGACTL_ADDR);
  int width = data >> 16;
  int height = data & 0xff00;
  uint32_t *addr = NULL;
  uint32_t *pixels_tmp = (uint32_t *) ctl->pixels;
  // check out-of-bounds
  if((ctl->x + ctl->w > width) || (ctl->y + ctl->h > height)) {
    panic("out of display range");
  }
  // transform pixel data
  for (int j = 0; j < ctl->h; j++) {
    addr = (uint32_t *) FB_ADDR + width * (j + ctl->y) + ctl->x;
    for (int i = 0; i < ctl->w; i++) {
      outl((uintptr_t) addr++, *pixels_tmp++);
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
