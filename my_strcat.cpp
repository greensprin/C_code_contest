#include "my_string.h"

char *my_strcat(char *s1, const char *s2) {
  char *s1_sta = s1;
  while (*s1 != '\0') {
    s1++;
  }

  while (*s2 != '\0') {
    *s1 = *s2;
    *s1++;
    *s2++;
  }

  return s1_sta;
}
