#include <common.h>

void do_syscall(Context *c);

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD: printf("nothing in yield\n"); c->mepc += 4; break;
    case EVENT_IRQ_TIMER: printf("timer irq\n"); break;
    case EVENT_SYSCALL: printf("system call\n"); do_syscall(c); break;

    default: panic("Unhandled event ID = %d", e.event);
  }
  
  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
