#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdbool.h>
#include <assert.h>
#include <NDL.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_x = 0, screen_y = 0;
static int screen_w = 0, screen_h = 0;
static int system_w = 0, system_h = 0;

uint32_t NDL_GetTicks() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return tv.tv_usec / 1000;
}

int NDL_PollEvent(char *buf, int len) {
  int fd = open("/dev/events", 0, 0);
  int ret = read(fd, buf, len);
  close(fd);
  return ret != 0;
}

typedef struct {
  int x; 
  int y;
  uint32_t *pixels;
  int w;
  int h;
  bool sync;
} ndl_dr;

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  
  char dispinfo[30] = {};
  int fd = open("/proc/dispinfo", 0, 0);
  read(fd, dispinfo, 30);
  // split width and height
  char *tmp = strtok(dispinfo, "\n= ");
  tmp = strtok(NULL, "\n= ");
  system_w = atoi(tmp);
  tmp = strtok(NULL, "\n= ");
  tmp = strtok(NULL, "\n= ");
  system_h = atoi(tmp);
  assert(system_w > 0 && system_h > 0);
  
  if((*w > system_w) || (*w == 0)) {
    screen_w = system_w;
  }
  else {
    screen_w = *w;
  }

  if((*h > system_h) || (*h == 0)) {
    screen_h = system_h;
  }
  else {
    screen_h = *h;
  }

  // centering the canvas
  screen_x = system_w / 2 - screen_w / 2;
  screen_y = system_h / 2 - screen_h / 2;
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  ndl_dr nld = {  .sync = true,
                  .x = screen_x,
                  .y = screen_y,
                  .w = screen_w,
                  .h = screen_h};

  if(x != 0 || y != 0 || w != 0 || h != 0) {
    nld.pixels = pixels;
    nld.x = screen_x + x;
    nld.y = screen_y + y;
    nld.w = w;
    nld.h = w;
  }

  printf("x: %d\n", nld.x);
  printf("y: %d\n", nld.y);
  printf("w: %d\n", nld.w);
  printf("h: %d\n", nld.h);

  assert(nld.x >= 0 && nld.x + w <= system_w);
  assert(nld.y >= 0 && nld.y + h <= system_h);

  int fd = open("/dev/fb", 0, 0);
  write(fd, &nld, sizeof(nld));
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
