#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  assert(s);
  size_t n = 0;
  while(*s != '\0') {
    n++;
    s++;
  }
  return n;
}

char *strcpy(char *dst, const char *src) {
  assert(src && dst);
  size_t i;
  for (i = 0; src[i] != '\0'; i++)
    dst[i] = src[i];
  dst[i] = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  assert(src && dst && (n > 0));
  size_t i;
  for (i = 0; i < n && src[i] != '\0'; i++)
    dst[i] = src[i];
  for ( ; i < n; i++)
    dst[i] = '\0';
  return dst;
}

char *strcat(char *dst, const char *src) {
  assert(src && dst);
  size_t dst_len = strlen(dst);
  size_t i;
  for (i = 0 ; src[i] != '\0' ; i++)
      dst[dst_len + i] = src[i];
  dst[dst_len + i] = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  assert(s1 && s2);
  while((*s1 != '\0') && (*s1 == *s2)) {
    s1++;
    s2++;
  }
  return *s1 - *s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  assert(s1 && s2 && (n >= 0));
  if(!n) return 0;
  while(--n && (*s1 != '\0') && (*s1 == *s2)) {
    s1++;
    s2++;
  }
  return *s1 - *s2;
}

void *memset(void *s, int c, size_t n) {
  assert(s && (n >= 0));
  char *tmp = (char *)s;
  while(n-- > 0) {
    *tmp++ = c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  assert(dst && src && (n >= 0));
	char* dst_ = (char*)dst;
	char* src_ = (char*)src;
  // memory overlap, reverse copy
	if ((dst_ > src_) && (dst_ < src_ + n))
	{
		while (n--)
			*(dst_ + n) = *(dst_ + n);
	}
	else
	{
		while (n--)
			*dst_++ = *src_++;
	}
	return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  assert(out && in && (n >= 0));
	char* out_ = (char*)out;
	char* in_ = (char*)in;
  while (n--)
    *out_++ = *in_++;
	return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  assert(s1 && s2 && (n >= 0));
  if(!n) return 0;
  char* s1_ = (char*)s1;
  char* s2_ = (char*)s2;
  while(--n && (*s1_ == *s2_)) {
    s1_++;
    s2_++;
  }
  return *s1_ - *s2_;
}

#endif
