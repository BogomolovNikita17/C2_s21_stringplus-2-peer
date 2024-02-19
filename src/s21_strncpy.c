#include "s21_string.h"

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  FST_FORS(n) dest[i] = src[i];
  return dest;
}