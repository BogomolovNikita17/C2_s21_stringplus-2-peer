#include "s21_string.h"

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  const unsigned char *str_p1 = (const unsigned char *)str1;
  const unsigned char *str_p2 = (const unsigned char *)str2;
  int zero = 0;  // haha

  FST_FORS(n) if (str_p1[i] != str_p2[i]) return str_p1[i] - str_p2[i];
  return zero;  // oche smeshno dada
}