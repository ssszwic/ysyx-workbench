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
void sys_write(Context *c);
void sys_brk(Context *c);

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case SYS_yield: sys_yield(c); break;
    case SYS_exit: sys_exit(c); break;
    case SYS_write: sys_write(c); break;
    case SYS_brk: sys_brk(c); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }

#ifdef CONFIG_SYSTEMCALL_TRACE
  char tmp[MAX_SINGLE_SYSTEMCALL_WIDTH] = {};
  memset(systemcall_ring_buf[systemcall_ring_ref], ' ', 6);
  if (++systemcall_ring_ref == SYSTEMCALL_RING_BUF_WIDTH) {systemcall_ring_ref = 0;}
  sprintf(tmp, "----> ID: %2d  para: 0x%lx  0x%lx  0x%lx  return: 0x%lx", a[0], a[1], a[2], a[3], c->GPRx);
  strcpy(systemcall_ring_buf[systemcall_ring_ref], tmp);
  printf("%s\n", tmp);
#endif
}

void sys_yield(Context *c) {
  c->GPR1 = -1;
  // return
  c->GPRx = 0;
}

void sys_exit(Context *c) {
  // #ifdef CONFIG_SYSTEMCALL_TRACE
  // print_systemcall_log();
  // #endif
  halt(c->GPR2);
}

void sys_write(Context *c) {
  if(c->GPR2 != 0 && c->GPR2 != 1) {
    printf("write only support fd: 0, 1\n");
    c->GPRx = -1;
    return;
  }
  char *str = (char *) c->GPR3;
  int i;
  for(i = 0; i < c->GPR4; i++) {
    if(str[i] == '\0') {
      break;
    }
    putch(str[i]);
  }
  c->GPRx = i;
  return;
}

void sys_brk(Context *c) {
  // default successful
  c->GPRx = 0;
  return;
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