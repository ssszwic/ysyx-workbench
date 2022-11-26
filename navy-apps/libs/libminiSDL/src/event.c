#include <NDL.h>
#include <SDL.h>
#include <string.h>
#include <assert.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  printf("have no implement!\n");
  assert(0);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  printf("have no implement!\n");
  assert(0);
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  // once read a key event
  char buf[20] = {};
  char *p;
  // wait until event
  while(NDL_PollEvent(buf, 20)) {
    p = strtok(buf, " ");
    if(strcmp(buf, "kd") == 0) {
      event->type = SDL_KEYDOWN;
    }
    else {
      event->type = SDL_KEYUP;
    }
    p = strtok(NULL, " \n");
    
    int i;
    for(i = 0; i < 83; i++) {
      // printf("%s\n", keyname[i]);
      if(strcmp(p, keyname[i]) == 0) break;
    }
    assert(i != 83);
    printf("%d\n", i);
    event->key.keysym.sym = i;
  }
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("have no implement!\n");
  assert(0);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  printf("have no implement!\n");
  assert(0);
  return NULL;
}
