#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

// static uint64_t timecmp = 0x100;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};

    switch (c->mcause) {
      case 0xb: ev.event = EVENT_YIELD; break;
      // case 0x7: ev.event = EVENT_IRQ_TIMER; timecmp = timecmp + 0x1000; outd(0x2004000, timecmp);break;
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

  // open time irq and set timecmp
  // outd(0x200BFF8, 0);
  // outd(0x2004000, timecmp);
  // uint64_t mie = 0x80;
  // asm volatile("csrw mie, %0" : : "r"(mie));

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
