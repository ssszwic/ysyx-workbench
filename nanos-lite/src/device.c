#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

static int system_w, system_h;

size_t serial_write(const void *buf, size_t offset, size_t len) {
  // print to stdout
  char *str = (char *) buf;
  for(int i = 0; i < len; i++) {
    putch(str[i]);
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  int i = 0;
  int index = 0;
  // max read num
  int num = len / 20;
  char tmp[20] = {};
  printf("\n");
  while(i < num) {
    printf("read\n");
    AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
    if (ev.keycode == AM_KEY_NONE) break;
    if(ev.keydown) {
      sprintf(tmp, "kd %s\n", keyname[ev.keycode]);
    }
    else {
      sprintf(tmp, "ku %s\n", keyname[ev.keycode]);
    }
    // the event beyond the buf will be discarded
    strcpy((char *)buf + index, tmp);
    index += strlen(tmp);
    i++;
  }
  printf("\n");
  return index;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  char tmp[50] = {};
  AM_GPU_CONFIG_T ev = io_read(AM_GPU_CONFIG);
  system_w = ev.width;
  system_h = ev.height;
  sprintf(tmp, "WIDTH: %d\nHEIGHT: %d", ev.width, ev.height);
  assert(len > strlen(tmp));
  strcpy((char *)buf, tmp);
  return strlen(tmp);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  size_t pixel_offset = offset / 4;
  int y = pixel_offset / system_w;
  int x = pixel_offset - system_w * y;
  char *pixels = (char *) buf;
  // only write one raw once
  // printf("offset: %d\n", offset);
  // printf("x: %d\n", x);
  // printf("y: %d\n", y);
  // printf("w: %d\n", len / 4);
  // printf("h: %d\n", 1);
  io_write(AM_GPU_FBDRAW, x, y, pixels, len / 4, 1, true);
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
