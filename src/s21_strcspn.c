#include "s21_string.h"

#define SPN(s)                                                 \
  s21_size_t i = 0;                                            \
  while (str1[i] && s21_strchr(str2, str1[i]) s s21_NULL) i++; \
  return i;

s21_size_t s21_strspn(const char *str1, const char *str2){SPN(!=)}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  SPN(==)
}
