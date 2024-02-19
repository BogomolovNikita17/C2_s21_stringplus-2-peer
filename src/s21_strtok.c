#include "s21_string.h"

char* s21_strtok(char* str, const char* delim) {
  static char* ptr = s21_NULL;
  if (!str) str = ptr;
  if (!str || !(*str)) return s21_NULL;
  str += s21_strspn(str, delim);
  if (!*str) return ptr = str, s21_NULL;

  char* tok = str + s21_strcspn(str, delim);
  if (*tok) *tok++ = '\0', ptr = tok;
  return str;
}