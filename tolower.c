// #include <unistd.h>

int ft_tolower(int c) {
  if (c >= 65 && c <= 90)
    return (c + 32);
  else
    return (c);
}
/*
int main(void) {
  int c = '?';
  int r = ft_tolower(c);
  // r += '0';
  write(1, &r, 1);
  return (0);
}
*/