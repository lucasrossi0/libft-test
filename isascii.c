// #include <unistd.h>

int ft_isascii(int c) {
  if (c >= 0 && c <= 127)
    return (1);
  else
    return (0);
}
/*
int main(void) {
  int c = 10;
  int test = ft_isascii(c);
  test += '0';
  write(1, &test, 1);
  return (0);
}
*/