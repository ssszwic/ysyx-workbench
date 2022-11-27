#include <NDL.h>
#include <SDL.h>
#include <assert.h>

int SDL_OpenAudio(SDL_AudioSpec *desired, SDL_AudioSpec *obtained) {
  // aviod return
  return 0;
}

void SDL_CloseAudio() {
  // aviod return
}

void SDL_PauseAudio(int pause_on) {
  // aviod return
}

void SDL_MixAudio(uint8_t *dst, uint8_t *src, uint32_t len, int volume) {
  // aviod return
}

SDL_AudioSpec *SDL_LoadWAV(const char *file, SDL_AudioSpec *spec, uint8_t **audio_buf, uint32_t *audio_len) {
  // aviod return
  return NULL;
}

void SDL_FreeWAV(uint8_t *audio_buf) {
  // aviod return
}

void SDL_LockAudio() {
  // aviod return
}

void SDL_UnlockAudio() {
  // aviod return
}
