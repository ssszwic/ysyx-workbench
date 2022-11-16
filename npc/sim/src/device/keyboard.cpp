#include "device/map.h"
#include "device/mmio.h"
#include <SDL2/SDL.h>
#include "cpu/cpu.h"

#define KEYDOWN_MASK 0x8000
#define MAP(c, f) c(f)
#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)

// Note that this is not the standard
#define _KEYS(f) \
  f(ESCAPE) f(F1) f(F2) f(F3) f(F4) f(F5) f(F6) f(F7) f(F8) f(F9) f(F10) f(F11) f(F12) \
f(GRAVE) f(1) f(2) f(3) f(4) f(5) f(6) f(7) f(8) f(9) f(0) f(MINUS) f(EQUALS) f(BACKSPACE) \
f(TAB) f(Q) f(W) f(E) f(R) f(T) f(Y) f(U) f(I) f(O) f(P) f(LEFTBRACKET) f(RIGHTBRACKET) f(BACKSLASH) \
f(CAPSLOCK) f(A) f(S) f(D) f(F) f(G) f(H) f(J) f(K) f(L) f(SEMICOLON) f(APOSTROPHE) f(RETURN) \
f(LSHIFT) f(Z) f(X) f(C) f(V) f(B) f(N) f(M) f(COMMA) f(PERIOD) f(SLASH) f(RSHIFT) \
f(LCTRL) f(APPLICATION) f(LALT) f(SPACE) f(RALT) f(RCTRL) \
f(UP) f(DOWN) f(LEFT) f(RIGHT) f(INSERT) f(DELETE) f(HOME) f(END) f(PAGEUP) f(PAGEDOWN)

#define _KEY_NAME(k) _KEY_##k,
int tmp = 1;

enum {
  _KEY_NONE = 0,
  // _KEY_ESCAPE
  // _KEY_F1
  // ......
  MAP(_KEYS, _KEY_NAME)
};

#define SDL_KEYMAP(k) keymap[concat(SDL_SCANCODE_, k)] = concat(_KEY_, k);
static uint32_t keymap[256] = {};

static void init_keymap() {
  // keymap[SDL_SCANCODE_KEY_ESCAPE] = _KEY_ESCAPE,
  // keymap[SDL_SCANCODE_KEY_F1] = _KEY_F1
  // ......
  MAP(_KEYS, SDL_KEYMAP)
}

static uint32_t *i8042_data_port_base = NULL;

#define KEY_QUEUE_LEN 1024
static int key_queue[KEY_QUEUE_LEN] = {};
static int key_f = 0, key_r = 0;

static void key_enqueue(uint32_t am_scancode) {
  key_queue[key_r] = am_scancode;
  key_r = (key_r + 1) % KEY_QUEUE_LEN;
  // if ker_r catched key_f, key queue overflow
  assert(key_r != key_f);
}

static uint32_t key_dequeue() {
  uint32_t key = _KEY_NONE;
  if (key_f != key_r) {
    key = key_queue[key_f];
    key_f = (key_f + 1) % KEY_QUEUE_LEN;
  }
  return key;
}

// detect key by SDL
void send_key(uint8_t scancode, bool is_keydown) {
  if (npc_state.state == NPC_RUNNING && keymap[scancode] != _KEY_NONE) {
    uint32_t am_scancode = keymap[scancode] | (is_keydown ? KEYDOWN_MASK : 0);
    key_enqueue(am_scancode);
  }
}



static void i8042_data_io_handler(uint32_t offset, uint8_t mask, bool is_write) {
  assert(!is_write);
  assert(offset == 0);
  i8042_data_port_base[0] = key_dequeue();
  if(i8042_data_port_base[0] != 0) {printf("%x\n", i8042_data_port_base[0]);}
  if(tmp % 100 == 0) {i8042_data_port_base[0] = 0x802c;}
  // i8042_data_port_base[0] = 0x802c;
}

void init_i8042() {
  i8042_data_port_base = (uint32_t *)new_space(8);
  i8042_data_port_base[0] = _KEY_NONE;
  add_mmio_map("keyboard", CONFIG_I8042_DATA_MMIO, i8042_data_port_base, 8, (io_callback_t) i8042_data_io_handler);
  init_keymap();
}
