#include "s21_string.h"

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  if (n == 0 || str1 == s21_NULL || str2 == s21_NULL) return 0;
  for (; *str1 == *str2 && n > 1; str1++, str2++, n--)
    ;
  return *str1 - *str2;
}