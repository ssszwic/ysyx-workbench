#include "device/map.h"
#include "device/mmio.h"
#include <sys/time.h>
#include <time.h>

static uint64_t boot_time;
static uint32_t *timer_base = NULL;

static uint64_t get_time_internal() {
  struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
  return us;
}

static void timer_io_handler(uint32_t offset, uint8_t mask, bool is_write) {
  assert(offset % 8 == 0);
  // cuttern time
  time_t t; 
  t = time(NULL);
  struct tm *p = localtime(&t); 
  // update time
  assert(offset % 8 == 0);
  uint64_t uptime = get_time_internal() - boot_time;
  if (!is_write) {
    timer_base[0] = (uint32_t) uptime;
    timer_base[1] = uptime >> 32;
    timer_base[2] = 1900 + p->tm_year;
    timer_base[3] = 1 + p->tm_mon;
    timer_base[4] = p->tm_mday;
    timer_base[5] = p->tm_hour;
    timer_base[6] = p->tm_min;
    timer_base[7] = p->tm_sec;
  }
  else {
    log_write(true, ANSI_FMT("serial do not support write!\n", ANSI_FG_RED));
    assert(0);
  }
}

void init_timer() {
  boot_time = get_time_internal();
  timer_base = (uint32_t *) new_space(32);
  add_mmio_map("serial", CONFIG_TIMER_MMIO, timer_base, 8, (io_callback_t) timer_io_handler);
}


