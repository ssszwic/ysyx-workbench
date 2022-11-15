#include "commen.h"

void init_serial();
void init_map();

void init_device() {
  init_map();
  init_serial();
}