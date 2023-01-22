#include <am.h>

Area heap;

# define nemu_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))

void putch(char ch) {
  int fd = open("stdout", 0, 0);
  write(fd, ch, 1);
  close(fd)
}

void halt(int code) {
  nemu_trap(code);
}
