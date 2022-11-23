#include <common.h>
#include "syscall.h"

void sys_yield(Context *c);

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; // type
  printf("type: %lx\n", a[0]);

  switch (a[0]) {
    case SYS_yield: sys_yield(c); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}

void sys_yield(Context *c) {
  c->GPR1 = -1;
  c->mepc += 4;
  c->GPRx = 0;
}
