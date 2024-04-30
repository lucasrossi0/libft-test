#include "libft.h"
// #include <unistd.h>
/*
int ft_isalnum(int c) {
  int alp = ft_isalpha(c);
  int dig = ft_isdigit(c);
  if (alp == 1 && dig == 1)
    return (1);
  else
    return (0);
}
*/
int ft_isalnum(int c) {
  if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') ||
      (c >= 'A' && c <= 'Z'))
    return (1);
  else
    return (0);
}
/*
int main(void) {
  int c = 52;
  char z = 'c';
  int r = ft_isalnum(c);
  int s = ft_isalnum(z);
  r += '0';
  s += '0';
  char n = '\n';
  write(1, &r, 1);
  write(1, &n, 1);
  write(1, &s, 1);
  return (0);
}

*/