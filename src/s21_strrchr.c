#include "s21_string.h"

char *s21_strrchr(const char *str, int c) {
  const char *start = s21_NULL;
  if (c == '\0') start = (str + s21_strlen(str));
  for (; *str; str++)
    if (*str == c) start = str;
  return (char *)start;
}