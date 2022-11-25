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

size_t serial_write(const void *buf, size_t offset, size_t len) {
  // print to stdout
  char *str = (char *) buf;
  for(int i = 0; i < len; i++) {
    putch(str[i]);
  }
  return len;
}

#ifdef CONFIG_SYSTEMCALL_TRACE
  char tmp[MAX_SINGLE_SYSTEMCALL_WIDTH] = {};
  memset(systemcall_ring_buf[systemcall_ring_ref], ' ', 6);
  if (++systemcall_ring_ref == SYSTEMCALL_RING_BUF_WIDTH) {systemcall_ring_ref = 0;}
  sprintf(tmp, "----> ID: %2d  para: 0x%lx  0x%lx  0x%lx  return: 0x%lx", a[0], a[1], a[2], a[3], c->GPRx);
  strcpy(systemcall_ring_buf[systemcall_ring_ref], tmp);
#endif

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
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
