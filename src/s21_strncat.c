#include "s21_string.h"

char* s21_strncat(char* dest, const char* src, s21_size_t n) {
  char* end = dest + s21_strlen(dest);
  for (; *src != '\0' && n > 0; src++, end++, n--) *end = *src;
  return dest;
}