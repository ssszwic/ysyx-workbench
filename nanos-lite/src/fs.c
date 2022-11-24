#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

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
  assert(fd > 2 && fd < file_num);
  assert(file_table[fd].cfo + len < file_table[fd].size);
  int ret = ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].cfo, len);
  file_table[fd].cfo += ret;
  return ret;
}

size_t fs_write(int fd, const void *buf, size_t len) {
  assert(fd > 0 && fd < file_num);
  if(fd < 3) {
    // print to stdout
    char *str = (char *) buf;
    for(int i = 0; i < len; i++) {
      putch(str[i]);
    }
    return len;
  }
  assert(file_table[fd].cfo + len < file_table[fd].size);
  int ret = ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].cfo, len);
  file_table[fd].cfo += ret;
  return ret;
}

size_t fs_lseek(int fd, size_t offset, int whence) {
  assert(fd > 2 && fd < file_num);
  if(whence == SEEK_SET) {
    file_table[fd].cfo = offset;
  }
  else if(whence == SEEK_CUR) {
    file_table[fd].cfo += offset;
  }
  else if(whence == SEEK_END) {
    file_table[fd].cfo = file_table[fd].size;
  }
  else {
    panic("invalid arguement!\n");
  }
  return file_table[fd].cfo;
}

int fs_close(int fd) {
  return 0;
}
