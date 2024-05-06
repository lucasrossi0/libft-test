#include <unistd.h>

int ft_isprint(int c) {
  if (c >= 32 && c <= 126)
    return (1);
  else
    return (0);
}

int main(void) {
  int c = 'Q';
  int r = ft_isprint(c);
  r += '0';
  write(1, &r, 1);
  return (0);
}