#include <common.h>
#include "syscall.h"

#define CONFIG_SYSTEMCALL_TRACE

#ifdef CONFIG_SYSTEMCALL_TRACE
#define SYSTEMCALL_RING_BUF_WIDTH 30
#define MAX_SINGLE_SYSTEMCALL_WIDTH 100
static char systemcall_ring_buf[SYSTEMCALL_RING_BUF_WIDTH][MAX_SINGLE_SYSTEMCALL_WIDTH] = {};
static int systemcall_ring_ref = SYSTEMCALL_RING_BUF_WIDTH - 1;
void print_systemcall_log();
#endif

void sys_yield(Context *c);
void sys_exit(Context *c);

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case SYS_yield: sys_yield(c); break;
    case SYS_exit: sys_exit(c); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }

#ifdef CONFIG_SYSTEMCALL_TRACE
  char tmp[MAX_SINGLE_SYSTEMCALL_WIDTH] = {};
  memset(systemcall_ring_buf[systemcall_ring_ref], ' ', 6);
  if (++systemcall_ring_ref == SYSTEMCALL_RING_BUF_WIDTH) {systemcall_ring_ref = 0;}
  sprintf(tmp, "----> ID: %2d  para: 0x%d  0x%d  0x%d  return: 0x%016lx", a[0], a[1], a[2], a[3], c->GPRx);
  strcpy(systemcall_ring_buf[systemcall_ring_ref], tmp);
#endif
}

void sys_yield(Context *c) {
  c->GPR1 = -1;
  c->mepc += 4;
  // return
  c->GPRx = 0;
}

void sys_exit(Context *c) {
  #ifdef CONFIG_SYSTEMCALL_TRACE
  print_systemcall_log();
  #endif
  halt(c->GPR2);
}


#ifdef CONFIG_SYSTEMCALL_TRACE
void print_systemcall_log() {
  if(systemcall_ring_buf[0][0] == '\0') {
    printf("system call ring buff is empty.\n");
    return;
  }
  printf("system call ring buff:\n");
  for (int i = 0; i < SYSTEMCALL_RING_BUF_WIDTH; i++) {
    if(systemcall_ring_buf[i][0] == '\0') break;
    printf("%s\n", systemcall_ring_buf[i]);
  }
  printf("\n");
}
#endif