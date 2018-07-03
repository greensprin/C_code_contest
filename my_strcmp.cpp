#include "my_string.h"

int my_strcmp(const char *s1, const char *s2) {
  while (1) {
    if (*s1 > *s2) {
      return 1;
    }
    else if (*s1 < *s2) {
      return -1;
    } else {
      if (*s1 == '\0') {
        return 0;
      }
    }
    s1++;
    s2++;
  }
}
