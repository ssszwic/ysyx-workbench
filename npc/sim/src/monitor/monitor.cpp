#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include "mem/mem.h"

static char *img_file = NULL;
static char *elf_file = NULL;
static char *log_file = NULL;

static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x0002b823,  // sd  zero,16(t0)
  0x0102b503,  // ld  a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};

static int parse_args(int argc, char *argv[]);
static long load_img();
void init_sdb();
void cpu_init();
extern "C" void init_disasm(const char *triple);

void init_monitor(int argc, char *argv[]) {
  // 1. Parsing parameters
  parse_args(argc, argv);

  // 2. create log file
  if(log_file != NULL) {
    printf("create log file %s\n", log_file);
    log_init(log_file);
  }
  else {
    printf("there is no log, log file will not be creat\n");
  }

  // 3. log binary image
  load_img();

  // 4. initial disasm
  init_disasm("riscv64" "-pc-linux-gnu");

  // 5. inittial sdb
  init_sdb();

  // 6. initial cpu
  cpu_init();
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {"log"      , required_argument, NULL, 'l'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bh", table, NULL)) != -1) {
    switch (o) {
      case 'b': break;
      case 'e': elf_file = optarg; break;
      case 'l': log_file = optarg; break;
      // 如果optstring的第一个参数是'-'，则会将所有的非选项当选项处理，并且返回1
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-e,--elf=ELF_FILE       need when run function trace\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

static long load_img() {
  if (img_file == NULL) {
    // Log("No image is given. Use the default build-in image.");
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) {
    log_write(true, "Can not open '%s'\n", img_file);
    assert(0);
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}