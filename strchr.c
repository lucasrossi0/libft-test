// #include <stdio.h>
// #include <unistd.h>

char *ft_strchr(char *string, int c) {
  while (*string) {
    if (*string == c) {
      return (string);
    }
    string++;
  }
  return (0);
}
/*
int main(void) {
  char *str = "lucas teste";
  int c = '?';
  char *res = ft_strchr(str, c);
  printf("%s\n", res);
  return (0);
}
*/