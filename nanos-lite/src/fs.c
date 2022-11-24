#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

#define CONFIG_FILE_TRACE

#ifdef CONFIG_FILE_TRACE
#define FILE_RING_BUF_WIDTH 30
#define MAX_SINGLE_FILE_WIDTH 100
static char file_ring_buf[FILE_RING_BUF_WIDTH][MAX_SINGLE_FILE_WIDTH] = {};
static int file_ring_ref = FILE_RING_BUF_WIDTH - 1;
void print_file_log();
#endif

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t cfo; // current file offset
} Finfo;

static int file_num;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  file_num = sizeof(file_table) / sizeof(Finfo);
  // TODO: initialize the size of /dev/fb
}

int fs_open(const char *pathname, int flags, int mode) {
  #ifdef CONFIG_FILE_TRACE
  char tmp[MAX_SINGLE_FILE_WIDTH] = {};
  memset(file_ring_buf[file_ring_ref], ' ', 6);
  if (++file_ring_ref == FILE_RING_BUF_WIDTH) {file_ring_ref = 0;}
  sprintf(tmp, "----> open  %s", pathname);
  strcpy(file_ring_buf[file_ring_ref], tmp);
  #endif

  int i;
  for(i = 0; i < file_num; i++) {
    if(strcmp(file_table[i].name, pathname) == 0) {
      file_table[i].cfo = 0;
      break;
    }
  }
  if(i == file_num) {
    panic("file %s is not exit!\n", file_table[i].name);
  }
  return i;
}

size_t fs_read(int fd, void *buf, size_t len) {
  #ifdef CONFIG_FILE_TRACE
  char tmp[MAX_SINGLE_FILE_WIDTH] = {};
  memset(file_ring_buf[file_ring_ref], ' ', 6);
  if (++file_ring_ref == FILE_RING_BUF_WIDTH) {file_ring_ref = 0;}
  sprintf(tmp, "----> read  %s cfo: 0x%x  len: 0x%x", file_table[fd].name, file_table[fd].cfo, len);
  strcpy(file_ring_buf[file_ring_ref], tmp);
  #endif

  assert(fd > 2 && fd < file_num);
  assert(file_table[fd].cfo <= file_table[fd].size);
  int ret;
  if(file_table[fd].cfo + len > file_table[fd].size) {
    // The remaining bytes are smaller than len, read to eng of file
    ret = file_table[fd].size - file_table[fd].cfo;
  }
  else {
    ret = len;
  }
  ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].cfo, ret);
  file_table[fd].cfo += ret;
  return ret;
}

size_t fs_write(int fd, const void *buf, size_t len) {
  #ifdef CONFIG_FILE_TRACE
  char tmp[MAX_SINGLE_FILE_WIDTH] = {};
  memset(file_ring_buf[file_ring_ref], ' ', 6);
  if (++file_ring_ref == FILE_RING_BUF_WIDTH) {file_ring_ref = 0;}
  sprintf(tmp, "----> write %s cfo: 0x%x  len: 0x%x", file_table[fd].name, file_table[fd].cfo, len);
  strcpy(file_ring_buf[file_ring_ref], tmp);
  #endif

  assert(fd > 0 && fd < file_num);
  if(fd < 3) {
    // print to stdout
    char *str = (char *) buf;
    for(int i = 0; i < len; i++) {
      putch(str[i]);
    }
    return len;
  }
  assert(file_table[fd].cfo + len <= file_table[fd].size);
  int ret = ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].cfo, len);
  file_table[fd].cfo += ret;
  return ret;
}

size_t fs_lseek(int fd, size_t offset, int whence) {
  #ifdef CONFIG_FILE_TRACE
  char tmp[MAX_SINGLE_FILE_WIDTH] = {};
  memset(file_ring_buf[file_ring_ref], ' ', 6);
  if (++file_ring_ref == FILE_RING_BUF_WIDTH) {file_ring_ref = 0;}
  sprintf(tmp, "----> lseek %s  offset: 0x%x  whence: %d", file_table[fd].name, offset, whence);
  strcpy(file_ring_buf[file_ring_ref], tmp);
  #endif

  assert(fd > 2 && fd < file_num);

  if(whence == SEEK_SET) {
    file_table[fd].cfo = offset;
  }
  else if(whence == SEEK_CUR) {
    file_table[fd].cfo += offset;
  }
  else if(whence == SEEK_END) {
    file_table[fd].cfo = file_table[fd].size + offset;
  }
  else {
    panic("invalid arguement!\n");
  }
  return file_table[fd].cfo;
}

int fs_close(int fd) {
  #ifdef CONFIG_FILE_TRACE
  char tmp[MAX_SINGLE_FILE_WIDTH] = {};
  memset(file_ring_buf[file_ring_ref], ' ', 6);
  if (++file_ring_ref == FILE_RING_BUF_WIDTH) {file_ring_ref = 0;}
  sprintf(tmp, "----> close %s", file_table[fd].name);
  strcpy(file_ring_buf[file_ring_ref], tmp);
  #endif

  #ifdef CONFIG_FILE_TRACE
  print_file_log();
  #endif

  return 0;
}

#ifdef CONFIG_FILE_TRACE
void print_file_log() {
  if(file_ring_buf[0][0] == '\0') {
    printf("file opcode ring buff is empty.\n");
    return;
  }
  printf("file opcode ring buff:\n");
  for (int i = 0; i < FILE_RING_BUF_WIDTH; i++) {
    if(file_ring_buf[i][0] == '\0') break;
    printf("%s\n", file_ring_buf[i]);
  }
  printf("\n");
}
#endif