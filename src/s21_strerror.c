#include "s21_string.h"

char *s21_strerror(int errnum) {
  const char *list[] = LIST_ERRORS;
  static char str[69] = {0};

  s21_sprintf(str, "Unknown error: %d", errnum);
  return (errnum <= N && errnum >= 0) ? (char *)list[errnum] : str;
}