#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
  while (*str && *str != c) str++;
  return (*str == c || c == '\0') ? (char *)str : s21_NULL;
}
