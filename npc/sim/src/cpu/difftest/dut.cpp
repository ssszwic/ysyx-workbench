#include "commen.h"
#include "cpu/cpu.h"
#include "cpu/difftest.h"
#include <dlfcn.h>

extern const char *regs;

void isa_reg_display();

NEMUCPUState cpu_diff = {};
static void checkregs(NEMUCPUState *ref) {
  bool same = true;
  // check next pc
  if(ref->pc != cpu.next_pc) {
    log_write(true, ANSI_FMT("pc (next instruction) error: \n", ANSI_FG_RED));
    log_write(true, "ref pc: 0x%016lx\n", ref->pc);
    log_write(true, "dut pc: 0x%016lx\n", cpu.next_pc);
    same = false;
  }

  // check reg
  for(int i = 0; i < 32; i++) {
    if(ref->gpr[i] != *(cpu.gpr + i)) {
      log_write(true, ANSI_FMT("reg[%d] %s error: \n", ANSI_FG_RED), i, regs[i]);
      log_write(true, "ref %s: 0x%016lx\n", regs[i], ref->gpr[i]);
      log_write(true, "dut %s: 0x%016lx\n", regs[i], *(cpu.gpr + i));
      same = false;
    }
  }

  if(!same) {
    // print all dut regs when error
    isa_reg_display();
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = *cpu.pc;
  }
}

void init_difftest(char *ref_so_file, long img_size) {
  printf("1cpu: %lx", *cpu.pc);
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

  // ref_difftest_init = (void(*)()) dlsym(handle, "difftest_init");
  // 
  void (*ref_difftest_init)() = (void(*)()) dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  log_write(true, "Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  log_write(true, "The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.\n", ref_so_file);

  // ref_difftest_init();
  // copy img instruction to ref
  printf("0%lx\n", *cpu.pc);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  // copy reg to ref
  printf("size: %ld\n", sizeof(cpu_diff.gpr[0]));
  memcpy(&cpu_diff, cpu.gpr, 32*sizeof(cpu_diff.gpr[0]));
  for(int i = 0; i < 32; i++){
    printf("%d: %ls\n", i, cpu_diff.gpr[i]);
  }
  printf("2%lx\n", *cpu.pc);
  cpu_diff.pc = *cpu.pc;
  printf("3%lx\n", cpu_diff.pc);
  printf("size: %ld\n", sizeof(cpu_diff));
  ref_difftest_regcpy(&cpu_diff, DIFFTEST_TO_DUT);
  printf("4%lx\n", *cpu.pc);
}

void difftest_step() {
  printf("5%lx\n", *cpu.pc);
  NEMUCPUState ref_r;

  // ref execute once
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r);
}

