// #include <unistd.h>

int ft_strlen(const char *s) {
  int i;

  i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return (i);
}
/*
int main(void) {
  const char *c = "teste";
  int t = ft_strlen(c);
  t += '0';
  write(1, &t, 1);
  return (0);
}
*/