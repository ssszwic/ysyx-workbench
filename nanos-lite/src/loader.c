#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

// only support riscv and native(x86_64)
#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#else
# error Unsupported ISA
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();

static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf_Ehdr elf_head;
  ramdisk_read(&elf_head, 0, sizeof(Elf_Ehdr));

  // check majic
  if (elf_head.e_ident[0] != 0x7F || elf_head.e_ident[1] != 'E' || 
      elf_head.e_ident[2] != 'L' || elf_head.e_ident[3] != 'F')
	{
		printf("Not a ELF file\n");
		assert(0);
	}

  // print magic
  // printf("magic: ");
  // for(int i = 0; i < 16; i++) {
  //   printf("%x ", elf_head.e_ident[i]);
  // }
  // printf("\n");
  // assert(0);

  // check ARCH
  assert(elf_head.e_machine == EXPECT_TYPE);

  // read Program Headers
  printf("num: %d\n", elf_head.e_phnum);
  Elf_Phdr *pstart = (Elf_Phdr*) malloc(sizeof(Elf_Phdr) * elf_head.e_phnum);
  assert(pstart != NULL);
  ramdisk_read(&elf_head, elf_head.e_phoff, sizeof(Elf_Phdr) * elf_head.e_phnum);

  // print program table type
  printf("program table: \n");
  for(int i = 0; i < elf_head.e_phnum; i++) {
    printf("%lx ", pstart->p_type);
    pstart++;
  }

  // load program segment og type LOAD
  

  
  printf("ok\n");
  assert(0);
  return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

