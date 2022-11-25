#include <stdio.h>
#include <NDL.h>

int main() {
  uint32_t begin, end;
  begin = NDL_GetTicks();
  while(1) {
    end = NDL_GetTicks();
    if(end - begin > 500) {
      begin = end;
      printf("0.5s have gone\n");
    }
  }
}