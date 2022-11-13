#include "commen.h"
#include "cpu/cpu.h"
#include "cpu/difftest.h"
#include <dlfcn.h>

void init_difftest(char *ref_so_file, long img_size) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  // for c++, type must be same
  ref_difftest_memcpy = (void(*)(paddr_t addr, void *buf, size_t n, bool direction)) dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void(*)(void *dut, bool direction)) dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void(*)(uint64_t n)) dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr =(void(*)(uint64_t NO)) dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  ref_difftest_init = (void(*)()) dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  log_write(true, "Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  log_write(true, "The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init();
  // copy img instruction to ref
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  // copy reg to ref
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}