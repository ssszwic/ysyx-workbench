#include <am.h>
#include <klib.h>


static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    
    // for (int i = 0; i < 8; i++) {
    //   for (int j = 0; j < 4; j++) {
    //   // Vertical print
    //     printf("0x%016lx   ", c->gpr[i + 8 * j]);
    //   }
    //   printf("\n");
    // }
    // printf("mcause: 0x%016lx", c->mcause);
    // printf("mstatus: 0x%016lx", c->mstatus);
    // printf("mepc: 0x%016lx", c->mepc);


    switch (c->mcause) {
      case 0xb: ev.event = EVENT_YIELD; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

// assembler: will call __am_irq_handle
extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  // set exception entry address
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
