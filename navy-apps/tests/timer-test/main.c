#include <stdio.h>
#include <NDL.h>

int main() {
  NDL_Init(0);
  uint32_t begin, end;
  begin = NDL_GetTicks();
  while(1) {
    end = NDL_GetTicks();
    if(end - begin > 500) {
      begin = end;
      printf("0.5s have gone\n");
    }
  }
  NDL_Quit();
}