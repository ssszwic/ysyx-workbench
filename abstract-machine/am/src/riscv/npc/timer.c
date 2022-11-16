#include <am.h>
#include "npc.h"
#include "riscv/riscv.h"

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = (uint32_t) inl(RTC_ADDR);
  uptime->us = uptime->us + (((uint64_t) inl(RTC_ADDR + 4)) << 32);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = (uint32_t) inl(RTC_ADDR + 28);
  rtc->minute = (uint32_t) inl(RTC_ADDR + 24);
  rtc->hour   = (uint32_t) inl(RTC_ADDR + 20);
  rtc->day    = (uint32_t) inl(RTC_ADDR + 16);
  rtc->month  = (uint32_t) inl(RTC_ADDR + 12);
  rtc->year   = (uint32_t) inl(RTC_ADDR + 8);
}
