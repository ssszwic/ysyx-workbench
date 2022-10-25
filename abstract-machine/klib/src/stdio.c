#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
#define BUF_SIZE 1000

static char buf[BUF_SIZE];

void itoa(char * buf, int value, int radix);

int printf(const char *fmt, ...) {
  assert(fmt);
  buf[0] = '\0';

  va_list ap;
  va_start(ap, fmt);
  int n = vsprintf(buf, fmt, ap);
  va_end(ap);

  for (int i = 0; i < n; i++) {
    putch(buf[i]);
  }
  return n;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  assert(out && fmt);
  char *str;
  int d;
  int n = 0;
  char tmp[100] = {};

  while(*fmt != '\0') {
    switch(*fmt) {
      case '%' :
        fmt++;
        if(*fmt == 'd') {
          fmt++;
          d = va_arg(ap, int);
          // print
          itoa(tmp, d, 10);
          for(int i = 0; i < strlen(tmp); i++) {
            out[n++] = tmp[i];
          }
        }
        else if(*fmt == 's') {
          fmt++;
          str = va_arg(ap, char *);
          assert(str);
          // print
          for(int i = 0; i < strlen(str); i++) {
            out[n++] = str[i];
          }
        }
        else {
          assert(0);
        }
        break;
      default:
        out[n++] = *fmt;
        fmt++;
    }
  }
  out[n] = '\0';
  return n;
}

int sprintf(char *out, const char *fmt, ...) {
  assert(out && fmt);

  va_list ap;
  va_start(ap, fmt);
  int n = vsprintf(out, fmt, ap);
  va_end(ap);

  return n;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

void itoa(char * buf, int value, int radix) {
  assert((radix == 10) || (radix == 8) || (radix == 16));
  uint64_t tmd_d;
  char ch;
  char tmp_buff[100] = {};
  int i = 0, j = 0;
  // value = 0
  if (value == 0) {
    buf[0] = '0';
    buf[1] = '\0';
    return;
  }

  // negetive is aviable for 10 radix
  if ((value < 0) && (radix == 10))
	{
		tmd_d = -value;
		*buf++ = '-';
	}
  else {
    tmd_d = value;
  }

  while (tmd_d)
	{
		ch = tmd_d % radix;
		tmd_d /= radix;
		if (ch < 10)
			tmp_buff[i++] = ch + '0';
		else 
			tmp_buff[i++] = ch + 'a' - 10;
	}
  // inverse order
  for (j=i-1; j>=0; j--)
	{
		*buf++ = tmp_buff[j];
	}
	*buf = '\0';		// 加上结束符
  return;
}

#endif
