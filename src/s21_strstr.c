#include "s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
  s21_size_t len = s21_strlen(needle);

  for (s21_size_t n; *haystack; haystack++) {
    for (n = 0; n < len && *(haystack + n) == needle[n]; n++)
      ;
    if (n == len) return (char *)haystack;
  }
  return s21_NULL;
}