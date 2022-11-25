#include <common.h>
#include "syscall.h"
#include <fs.h>

// #define CONFIG_SYSTEMCALL_TRACE

#ifdef CONFIG_SYSTEMCALL_TRACE
#define SYSTEMCALL_RING_BUF_WIDTH 30
#define MAX_SINGLE_SYSTEMCALL_WIDTH 100
static char systemcall_ring_buf[SYSTEMCALL_RING_BUF_WIDTH][MAX_SINGLE_SYSTEMCALL_WIDTH] = {};
static int systemcall_ring_ref = SYSTEMCALL_RING_BUF_WIDTH - 1;
void print_systemcall_log();
#endif

void sys_yield(Context *c);
void sys_exit(Context *c);
void sys_brk(Context *c);
void sys_open(Context *c);
void sys_read(Context *c);
void sys_write(Context *c);
void sys_close(Context *c);
void sys_lseek(Context *c);
void sys_gettimeofday(Context *c);

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  // printf("ID: %2d  para: 0x%lx  0x%lx  0x%lx\n", a[0], a[1], a[2], a[3]);

  switch (a[0]) {
    case SYS_exit: sys_exit(c); break;
    case SYS_yield: sys_yield(c); break;
    case SYS_open: sys_open(c); break;
    case SYS_read: sys_read(c); break;
    case SYS_write: sys_write(c); break;
    case SYS_close: sys_close(c); break;
    case SYS_lseek: sys_lseek(c); break;
    case SYS_brk: sys_brk(c); break;
    case SYS_gettimeofday: sys_gettimeofday(c); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }

#ifdef CONFIG_SYSTEMCALL_TRACE
  char tmp[MAX_SINGLE_SYSTEMCALL_WIDTH] = {};
  memset(systemcall_ring_buf[systemcall_ring_ref], ' ', 6);
  if (++systemcall_ring_ref == SYSTEMCALL_RING_BUF_WIDTH) {systemcall_ring_ref = 0;}
  sprintf(tmp, "----> ID: %2d  para: 0x%lx  0x%lx  0x%lx  return: 0x%lx", a[0], a[1], a[2], a[3], c->GPRx);
  strcpy(systemcall_ring_buf[systemcall_ring_ref], tmp);
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

void sys_open(Context *c) {
  c->GPRx = fs_open((char *) c->GPR2, c->GPR3, c->GPR4);
  return;
}

void sys_read(Context *c) {
  c->GPRx = fs_read(c->GPR2, (void *) c->GPR3, c->GPR4);
  return;
}

void sys_write(Context *c) {
  c->GPRx = fs_write(c->GPR2, (void *) c->GPR3, c->GPR4);
  return;
}

void sys_close(Context *c) {
  c->GPRx = fs_close(c->GPR2);
  return;
}

void sys_lseek(Context *c) {
  c->GPRx = fs_lseek(c->GPR2, c->GPR3, c->GPR4);
  return;
}

void sys_brk(Context *c) {
  // default successful
  c->GPRx = 0;
  return;
}

void sys_gettimeofday(Context *c) {
  printf("addr: %lx\n", io_read(AM_TIMER_UPTIME).us);
  printf("1\n");
  *(uint64_t *) c->GPR2 = io_read(AM_TIMER_UPTIME).us;
  printf("2\n");
  *(((uint64_t *) c->GPR2) + 1) = (*(uint64_t *) c->GPR2) / 1000000;
  printf("3\n");
  c->GPRx = 0;
  printf("%ld\n", *(uint64_t *) c->GPR2);
  printf("4\n");
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