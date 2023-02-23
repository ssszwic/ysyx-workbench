#include <common.h>

void do_syscall(Context *c);

// only support riscv and native(x86_64)
#if defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define MY_IRQ_RSICV
#endif

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD:
      printf("nothing in yield\n"); 
      #ifdef MY_IRQ_RSICV
      c->mepc += 4; 
      #endif
      break;
    case EVENT_IRQ_TIMER: printf("timer irq\n"); break;
    case EVENT_SYSCALL: 
      do_syscall(c); 
      #ifdef MY_IRQ_RSICV
      c->mepc += 4; 
      #endif
      break;

    default: panic("Unhandled event ID = %d", e.event);
  }
  
  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
