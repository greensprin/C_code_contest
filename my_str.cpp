#include <iostream>
#include <string.h>

int my_strcmp(const char *s1, const char *s2);
char *my_strcat(char *s1, const char *s2);
char *my_strcpy(char *s1, const char *s2);

int main (void) {
  // strcmp
  std::cout << "run strcmp" << std::endl;
  int result;
  result = my_strcmp("12345", "12345");
  std::cout << result << std::endl;
  result = my_strcmp("12346", "12345");
  std::cout << result << std::endl;
  result = my_strcmp("12345", "12346");
  std::cout << result << std::endl;
  result = my_strcmp("123450", "12345");
  std::cout << result << std::endl;
  result = my_strcmp("12345", "123450");
  std::cout << result << std::endl;

  // strcat
  std::cout << "run strcat" << std::endl;
  char s1[256] = "abc";
  char s2[256] = "def";
  char s3[256] = "abc";
  char s4[256] = "def";
  char *tmp1 = my_strcat(s1, s2);
  char *tmp2 = strcat(s3, s4);
  std::cout << s1 << " " << s2 << " " << tmp1 << std::endl;
  std::cout << s3 << " " << s4 << " " << tmp2 << std::endl;

  //strcpy
  std::cout << "run strcpy" << std::endl;
  char scpy1[256] = "abc";
  char scpy2[256] = "momiki masashi";
  std::cout << scpy1 << " " << scpy2 << std::endl;
  my_strcpy(scpy1, scpy2);
  std::cout << scpy1 << " " << scpy2 << std::endl;
  
  return 0;
}

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

char *my_strcpy(char *s1, const char *s2) {
  char *s1_sta = s1;
  while (*s2 != '\0') {
    *s1 = *s2;
    s1++;
    s2++;
  }

  return s1_sta;
}
