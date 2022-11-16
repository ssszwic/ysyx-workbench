#include "commen.h"

void init_serial();
void init_map();
void init_timer();
void init_i8042();

void init_device() {
  init_map();
  #ifdef CONFIG_HAS_SERIAL
  init_serial();
  #endif
  #ifdef CONFIG_HAS_TIMER
  init_timer();
  #endif
  #ifdef CONFIG_I8042_DATA_MMIO
  init_i8042();
  #endif
}