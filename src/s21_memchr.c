#include "s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  char *ptr = s21_NULL;
  int len = n / sizeof(char);

  if (n != 0 && str != s21_NULL) FST_FOR(len)
  if (*((char *)str + i) == (char)c && ptr == s21_NULL) ptr = (char *)str + i;
  return ptr;
}
