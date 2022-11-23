#include <common.h>

void init_mm(void);
void init_device(void);
void init_ramdisk(void);
void init_irq(void);
void init_fs(void);
void init_proc(void);

int main() {
  uint64_t *tmp1 = malloc(800);
  *tmp1 = 10;
  printf("tmp1: %lx\n", *tmp1);

  

  

  extern const char logo[];

  // uint64_t *tmp2 = malloc(8);
  // *tmp2 = 10;
  // printf("tmp2: %lx\n", *tmp2);


  printf("%s", logo);
  Log("'Hello World!' from Nanos-lite");
  Log("Build time: %s, %s", __TIME__, __DATE__);

  

  init_mm();



  init_device();
  
  

  init_ramdisk();

#ifdef HAS_CTE
  init_irq();
#endif

  init_fs();

  init_proc();

  Log("Finish initialization");

#ifdef HAS_CTE
  yield();
#endif

  panic("Should not reach here");
}
