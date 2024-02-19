#include "s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  unsigned char *dest_p = (unsigned char *)dest;
  unsigned char *src_p = (unsigned char *)src;

  FST_FORS(n) dest_p[i] = src_p[i];
  return dest;
}