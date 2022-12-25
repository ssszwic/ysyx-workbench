#include <NDL.h>
#include <SDL.h>
#include <string.h>
#include <assert.h>

#define keyname(k) #k,

static uint8_t key_state[83];

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  printf("SDL_PushEvent have no implement!\n");
  assert(0);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  // once read a key event
  char buf[20] = {};

  if(NDL_PollEvent(buf, 20) == 0) return 0;

  char *p = strtok(buf, " ");
  if(strcmp(buf, "kd") == 0) {
    ev->type = SDL_KEYDOWN;
  }
  else {
    ev->type = SDL_KEYUP;
  }
  p = strtok(NULL, " \n");
    
  int i;
  for(i = 0; i < 83; i++) {
    // printf("%s\n", keyname[i]);
    if(strcmp(p, keyname[i]) == 0) break;
  }
  assert(i != 83);
  ev->key.keysym.sym = i;

  if(ev->type == SDL_KEYDOWN) {
    key_state[i] = 1;
  }
  else {
    key_state[i] = 0;
  }

  return 1;
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
    event->key.keysym.sym = i;
  }
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("SDL_PeepEvents have no implement!\n");
  assert(0);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  // char buf[20] = {};
  // char *p;
  // memset(key_state, 0, 83);
  // if(NDL_PollEvent(buf, 20)) {
  //   p = strtok(buf, " ");
  //   if(strcmp(buf, "kd") == 0) {
  //     p = strtok(NULL, " \n");
  //     int i;
  //     for(i = 0; i < 83; i++) {
  //       // printf("%s\n", keyname[i]);
  //       if(strcmp(p, keyname[i]) == 0) break;
  //     }
  //     assert(i != 83);
  //     key_state[i] = 1;
  //   }
  // }
  return key_state;
}
