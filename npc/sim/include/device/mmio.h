#ifndef __MMIO_H__
#define __MMIO_H__

#include "commen.h"
#include "device/map.h"

uint64_t mmio_read(paddr_t addr);
void mmio_write(paddr_t addr, word_t data, char mask);
void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len, io_callback_t callback);

#endif