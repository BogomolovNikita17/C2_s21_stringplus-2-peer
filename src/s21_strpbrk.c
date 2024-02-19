#include "s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  for (; *str1; str1++)
    for (s21_size_t i = 0; str2[i]; i++)
      if (*str1 == str2[i]) return (char *)str1;
  return s21_NULL;
}