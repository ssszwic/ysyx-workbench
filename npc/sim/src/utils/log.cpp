#include "commen.h"
#include <stdarg.h>

static FILE *fp = NULL;
static char buff[1000];

void log_init(char *file) {
  fp = fopen(file, "w+");
  if(fp == NULL) {
    printf("can't open or create log file: %s\n", file);
    assert(0);
  }
}

void log_exit() {
  if(fp != NULL) {
    fclose(fp);
  }
}

void log_write(const char *fmt, ...) {
  assert(fmt);
  buff[0] = '\0';

  va_list ap;
  va_start(ap, fmt);
  int n = vsprintf(buff, fmt, ap);
  va_end(ap);

  if(fp != NULL) {
    // write to log file
    fprintf(fp, buff);
  }
  // print to screen
  printf("%s", buff);
}