#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len);

void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(dst && src);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  // If srcrect is NULL, the entire surface is copied.
  int16_t src_x = (srcrect == NULL ? 0 : srcrect->x);
  int16_t src_y = (srcrect == NULL ? 0 : srcrect->y);
  // If dstrect is NULL, then the destination position (upper left corner) is (0, 0).
  int16_t dst_x = (dstrect == NULL ? 0 : dstrect->x);
  int16_t dst_y = (dstrect == NULL ? 0 : dstrect->y);
  uint16_t rect_w = (srcrect == NULL ? src->w : srcrect->w);
  uint16_t rect_h = (srcrect == NULL ? src->h : srcrect->h);

  assert(src_x + rect_w <= src->w && src_y + rect_h <= src->h);
  assert(dst_x + rect_w <= dst->w && dst_y + rect_h <= dst->h);
  
  if(src->format->BytesPerPixel == 1) {
    uint8_t *src_pixels = (uint8_t *) src->pixels;
    uint8_t *dst_pixels = (uint8_t *) dst->pixels;  
    src_pixels += src_y * src->w + src_x;
    dst_pixels += dst_y * dst->w + dst_x;
    for(int j = 0; j < rect_h; j++) {
      for(int i = 0; i < rect_w; i++) {
        *(dst_pixels++) = *(src_pixels++);
      }
      src_pixels += src->w - rect_w;
      dst_pixels += dst->w - rect_w;
    }
  }
  else {
    uint32_t *src_pixels = (uint32_t *) src->pixels;
    uint32_t *dst_pixels = (uint32_t *) dst->pixels;
    src_pixels += src_y * src->w + src_x;
    dst_pixels += dst_y * dst->w + dst_x;
    for(int j = 0; j < rect_h; j++) {
      for(int i = 0; i < rect_w; i++) {
        *dst_pixels++ = *src_pixels++;
      }
      src_pixels += src->w - rect_w;
      dst_pixels += dst->w - rect_w;
    }
  }
  
  // The final blit rectangle is saved in dstrect after all clipping is performed (srcrect is not modified).
  if(dstrect != NULL) {
    dstrect->x = dst_x;
    dstrect->y = dst_y;
    dstrect->w = rect_w;
    dstrect->h = rect_h;
  }
}

void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
  int16_t rect_x = (dstrect == NULL ? 0 : dstrect->x);
  int16_t rect_y = (dstrect == NULL ? 0 : dstrect->y);
  uint16_t rect_w = (dstrect == NULL ? dst->w : dstrect->w);
  uint16_t rect_h = (dstrect == NULL ? dst->h : dstrect->h);
  assert(rect_x + rect_w <= dst->w && rect_y + rect_h <= dst->h);
  
  if(dst->format->BytesPerPixel == 1) {
    uint8_t *dst_pixels = (uint8_t *) dst->pixels;
    dst_pixels += rect_y * dst->w + rect_x;
    for(int j = 0; j < rect_h; j++) {
      for(int i = 0; i < rect_w; i++) {
        *(dst_pixels++) = color;
      }
      dst_pixels += dst->w - rect_w; 
    }
  }
  else {
    uint32_t *dst_pixels = (uint32_t *) dst->pixels;
    dst_pixels += rect_y * dst->w + rect_x;
    for(int j = 0; j < rect_h; j++) {
      for(int i = 0; i < rect_w; i++) {
        *(dst_pixels++) = color;
      }
      dst_pixels += dst->w - rect_w; 
    }
  }
}

void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  if(s->format->BytesPerPixel == 1) {
    // palette data type
    // uint8_t *palette_data = (uint8_t *) s->pixels;
    // uint32_t *ABGRdata = malloc(s->h * s->w * 4);
    // assert(ABGRdata);
    // uint32_t *temp = ABGRdata;
    // for(int i = 0; i < s->h * s->w; i++) {
    //   *(temp++) = s->format->palette->colors[*(palette_data++)].val;
    // }
    
    // uint32_t *ARGBdata = malloc(s->h * s->w * 4);
    // ConvertPixelsARGB_ABGR(ARGBdata, ABGRdata, s->h * s->w);
    // NDL_DrawRect((uint32_t *) ARGBdata, x, y, w, h);
    // free(ABGRdata);
    // free(ARGBdata);
    // ABGRdata = NULL;
    // ARGBdata = NULL;
    // return;

    // palette data type
    if(x == 0 && y == 0 && w == 0 && h == 0) {
      w = s->w;
      h = s->h;
    }

    uint32_t *ABGRdata = malloc(h * w * 4);
    assert(ABGRdata);
    uint32_t *temp = ABGRdata;

    uint8_t *palette_data = (uint8_t *) s->pixels + y * s->w + x;
    for (int j = 0; j < h; j++) {
      for (int i = 0; i < w; i++) {
        *(temp++) = s->format->palette->colors[*(palette_data++)].val;
      }
      palette_data += s->w - w;
    }

    uint32_t *ARGBdata = malloc(h * w * 4);
    assert(ARGBdata);
    ConvertPixelsARGB_ABGR(ARGBdata, ABGRdata, h * w);
    NDL_DrawRect((uint32_t *) ARGBdata, x, y, w, h);
    free(ABGRdata);
    free(ARGBdata);
    ABGRdata = NULL;
    ARGBdata = NULL;
    return;
  }
  NDL_DrawRect((uint32_t *) s->pixels, x, y, w, h);
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);
  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g; 
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
}
