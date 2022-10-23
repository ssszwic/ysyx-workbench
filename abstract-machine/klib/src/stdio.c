#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void itoa(char * buf, int value, int radix);

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  assert(out && fmt);
  char *str;
  int d;
  int n = 0;

  // macro for variable parameters
  va_list ap;
  va_start(ap, fmt);

  char buf[100] = {};

  while(*fmt != '\0') {
    switch(*fmt) {
      case '%' :
        fmt++;
        if(*fmt == 'd') {
          fmt++;
          d = va_arg(ap, int);
          // print
          itoa(buf, d, 10);
          for(int i = 0; i < strlen(buf); i++) {
            out[n++] = buf[i];
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
    }
  }
  out[n] = '\0';
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
