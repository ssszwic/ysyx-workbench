#include "commen.h"

void init_serial();
void init_map();

void init_device() {
  init_map();
  #ifdef CONFIG_HAS_SERIAL
  init_serial();
  #endif
}