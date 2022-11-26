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
  char tmp[10] = {};
  while(1) {
    AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
    if (ev.keycode == AM_KEY_NONE) break;
    if(ev.keydown) {
      sprintf(tmp, "kd %s\n", keyname[ev.keycode]);
    }
    else {
      sprintf(tmp, "ku %s\n", keyname[ev.keycode]);
    }
    // the event beyond the buf will be discarded
    if(i + strlen(tmp) > len) break;
    strcpy((char *)buf + i, tmp);
    i += strlen(tmp);
  }
  return i;
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
  int y = offset / system_w;
  int x = offset - system_w * y;
  char *pixels = (char *) buf;
  // only write one raw once
  io_write(AM_GPU_FBDRAW, x, y, pixels, len, 1, true);
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
