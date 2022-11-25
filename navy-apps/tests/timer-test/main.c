#include <stdio.h>
#include <sys/time.h>

int main() {
  struct timeval tv_begin, tv_end;
  gettimeofday(&tv_begin, NULL);

  while(1) {
    gettimeofday(&tv_end, NULL);
    if(tv_end.tv_usec - tv_begin.tv_usec > 500000) {
      tv_begin = tv_end;
      printf("0.5s have gone\n");
    }
  }
}