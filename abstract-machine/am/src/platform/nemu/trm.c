#include <am.h>
#include <nemu.h>

extern char _heap_start;
int main(const char *args);

// start and end of heep
// A section of memory freely available to the program
Area heap = RANGE(&_heap_start, PMEM_END);

#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

// print 1 char
void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

// ending running of the program
void halt(int code) {
  nemu_trap(code);

  // should not reach here
  while (1);
}

// initialize turing machine
void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
