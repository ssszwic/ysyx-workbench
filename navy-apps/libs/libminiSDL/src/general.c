#include <NDL.h>
#include <assert.h>
#include <stdio.h>

int SDL_Init(uint32_t flags) {
  return NDL_Init(flags);
}

void SDL_Quit() {
  NDL_Quit();
}

char *SDL_GetError() {
  return "Navy does not support SDL_GetError()";
}

int SDL_SetError(const char* fmt, ...) {
  printf("have no implement!\n");
  assert(0);
  return -1;
}

int SDL_ShowCursor(int toggle) {
  printf("have no implement!\n");
  assert(0);
  return 0;
}

void SDL_WM_SetCaption(const char *title, const char *icon) {
  printf("have no implement!\n");
  assert(0);
}
