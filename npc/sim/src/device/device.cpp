#include "commen.h"
#include <SDL2/SDL.h>
#include "cpu/cpu.h"


uint64_t get_time();
void init_serial();
void init_map();
void init_timer();
void init_i8042();
void init_vga();


void send_key(uint8_t, bool);
void vga_update_screen();

void init_device() {
  init_map();
  #ifdef CONFIG_HAS_SERIAL
  init_serial();
  #endif
  #ifdef CONFIG_HAS_TIMER
  init_timer();
  #endif
  #ifdef CONFIG_I8042_DATA_MMIO
  init_i8042();
  #endif
  #ifdef CONFIG_HAS_VGA
  init_vga();
  #endif
}

void device_update() {

#ifdef CONFIG_HAS_VGA
  vga_update_screen();
#endif


  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        npc_state.state = NPC_QUIT;
        break;
#ifdef CONFIG_HAS_KEYBOARD
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
#endif
      default: break;
    }
  }
}

void sdl_clear_event_queue() {
#ifndef CONFIG_TARGET_AM
  SDL_Event event;
  while (SDL_PollEvent(&event));
#endif
}

