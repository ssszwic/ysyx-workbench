#include <proc.h>
#include <elf.h>
#include <fs.h>

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
  printf("aaaname: %saaa", filename);
  int fd = fs_open(filename, 0, 0);

  Elf_Ehdr elf_head;
  // ramdisk_read(&elf_head, 0, sizeof(Elf_Ehdr));
  fs_read(fd, &elf_head, sizeof(Elf_Ehdr));

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

  // check ARCH
  assert(elf_head.e_machine == EXPECT_TYPE);

  // read Program Headers
  Elf_Phdr *pstart = (Elf_Phdr*) malloc(sizeof(Elf_Phdr) * elf_head.e_phnum);
  assert(pstart != NULL);

  // ramdisk_read(pstart, elf_head.e_phoff, sizeof(Elf_Phdr) * elf_head.e_phnum);
  fs_lseek(fd, elf_head.e_phoff, SEEK_SET);
  fs_read(fd, pstart, sizeof(Elf_Phdr) * elf_head.e_phnum);

  // print program table type
  // printf("program table: num %lx\n", elf_head.e_phnum);
  // for(int i = 0; i < elf_head.e_phnum; i++) {
  //   printf("type: %lx filesize: %lx, memsize: %lx\n", pstart[i].p_type, pstart[i].p_filesz, pstart[i].p_memsz);
  //   printf("offset: %lx, virtaddr: %lx\n", pstart[i].p_offset, pstart[i].p_vaddr);
  // }
  // printf("\n");

  // load program segment og type LOAD
  for(int i = 0; i < elf_head.e_phnum; i++) {
    if(pstart[i].p_type == PT_LOAD) {
      // read elf to virtual space
      // ramdisk_read((char *) pstart[i].p_vaddr, pstart[i].p_offset, pstart[i].p_filesz);
      fs_lseek(fd, pstart[i].p_offset, SEEK_SET);
      fs_read(fd, (void *) pstart[i].p_vaddr, pstart[i].p_filesz);
      // clear for remaining space
      memset((char *) pstart[i].p_vaddr + pstart[i].p_filesz, 0, pstart[i].p_memsz - pstart[i].p_filesz);
    }
  }
  free(pstart);
  pstart = NULL;
  fs_close(fd);
  
  return elf_head.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

