#include "s21_string.h"

void *s21_memset(void *str, int c, s21_size_t n) {
  unsigned char *buff = (unsigned char *)str;

  FST_FORS(n) buff[i] = c;
  return str;
}