#include <stdio.h>
#include <NDL.h>

int main() {
  NDL_Init(0);
  // NDL_OpenCanvas(NULL, NULL);
  while (1) {
    char buf[64];
    if (NDL_PollEvent(buf, sizeof(buf))) {
      printf("receive event: %s\n", buf);
    }
  }
  return 0;
}
