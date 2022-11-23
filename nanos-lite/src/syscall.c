#include <common.h>
#include "syscall.h"

void sys_yield(Context *c);
void sys_exit(Context *c);

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; // type

  switch (a[0]) {
    case SYS_yield: sys_yield(c); break;
    case SYS_exit: sys_exit(c); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}

void sys_yield(Context *c) {
  c->GPR1 = -1;
  c->mepc += 4;
  // return
  c->GPRx = 0;
}

void sys_exit(Context *c) {
  halt(c->GPR2);
}