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

static uint64_t begin_time_ms;

uint32_t NDL_GetTicks() {
  uint64_t now;
  struct timeval tv;
  gettimeofday(&tv, NULL);
  
  // printf("s: %ld\n", tv.tv_sec * 1000 + tv.tv_usec/1000);
  now = tv.tv_sec * 1000 + tv.tv_usec/1000 - begin_time_ms;
  return now;
}

int NDL_PollEvent(char *buf, int len) {
  int fd = open("/dev/events", 0, 0);
  int ret = read(fd, buf, len);
  return ret != 0;
}

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
  // printf("system w: %d\n", system_w);
  // printf("system h: %d\n", system_h);
  // printf("screen x: %d\n", screen_x);
  // printf("screen y: %d\n", screen_y);
  if(x == 0 && y == 0 && w == 0 && h == 0) {
    x = screen_x;
    y = screen_y;
    w = screen_w;
    h = screen_h;
  }
  else {
    x = screen_x + x;
    y = screen_y + y;
    w = w;
    h = h;
  }
  assert(x >= 0 && x + w <= system_w);
  assert(y >= 0 && y + h <= system_h);

  // printf("x: %d\n", x);
  // printf("y: %d\n", y);
  // printf("h: %d\n", h);
  // printf("w: %d\n", w);

  // for(int j = 0; j < 13; j++) {
  //   for (int i = 0; i < 7; i++) {
  //     printf("%x ", * (pixels + screen_w * (26 + j) + i + 28));
  //   }
  //   printf("\n");
  // }
  // printf("\n");
  int fd = open("/dev/fb", 0, 0);

  for(int i = 0; i < h; i++) {  
    lseek(fd, ((y + i) * system_w + x) * 4, SEEK_SET);
    write(fd, pixels + i * w, w * 4);
  }
  // don't close device for native
  // close(fd);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
  printf("NDL_OpenAudio have no implement!\n");
  assert(0);
}

void NDL_CloseAudio() {
  printf("NDL_CloseAudio have no implement!\n");
  assert(0);
}

int NDL_PlayAudio(void *buf, int len) {
  printf("NDL_PlayAudio have no implement!\n");
  assert(0);
  return 0;
}

int NDL_QueryAudio() {
  printf("NDL_QueryAudio have no implement!\n");
  assert(0);
  return 0;
}

int NDL_Init(uint32_t flags) {
  // init time ms
  struct timeval tv;
  gettimeofday(&tv, NULL);
  begin_time_ms = tv.tv_sec * 1000 + tv.tv_usec / 1000;
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {

}
