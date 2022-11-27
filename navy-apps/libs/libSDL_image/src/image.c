#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  FILE *fp = fopen(filename, "r");
  assert(fp);
  // get file size
  fseek(fp,0,SEEK_END);
  int len = ftell(fp);
  unsigned char* buf = NULL;
  // malloc memory
  buf = malloc(len);
  assert(buf);
  fseek(fp,0,SEEK_SET);
  fread(buf, sizeof(unsigned char), len, fp);
  // convert
  SDL_Surface* p = STBIMG_LoadFromMemory(buf, len);
  fclose(fp);
  // free memory
  free(buf);
  buf = NULL;
  return p;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
