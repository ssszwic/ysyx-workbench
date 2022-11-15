#include "device/map.h"
#include "device/mmio.h"

static uint8_t *serial_base = NULL;

static void serial_putc(char ch) {
  putc(ch, stderr);
}

static void serial_io_handler(uint32_t offset, uint8_t mask, bool is_write) {
    /* We bind the serial port with the host stderr in NEMU. */
    assert(mask == 1);
    assert(offset == 0);
    if (is_write) {
      serial_putc(serial_base[0]);
    }
    else {
      log_write(true, ANSI_FMT("serial do not support read!\n", ANSI_FG_RED));
      assert(0);
    }
}

void init_serial() {
  serial_base = new_space(8);
  add_mmio_map("serial", CONFIG_SERIAL_MMIO, serial_base, 8, (io_callback_t) serial_io_handler);
}