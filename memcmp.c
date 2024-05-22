#include <stdlib.h>

int ft_strlen(const char *s) {
  int i;

  i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return (i);
}

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if (n == 0)
        return (0);
    
}