#include <unistd.h>

int ft_toupper(int c) {
  if (c >= 97 && c <= 122)
    return (c - 32);
  else
    return (c);
}
int main(void) {
  int c = 'c';
  int r = ft_toupper(c);
  // r += '0';
  write(1, &r, 1);
  return (0);
}