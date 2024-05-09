// #include <stdio.h>
// #include <unistd.h>

char *ft_strrchr(char *string, int c) {
  int i;

  i = 0;
  while (*string) {
    string++;
    i++;
  }
  while (i != 0) {
    string--;
    if (*string == c) {
      return (string);
    }
    i--;
  }
  return (0);
}
/*
int main(void) {
  char *str = "lucas teste";
  int c = '$';
  char *res = ft_strrchr(str, c);
  printf("%s\n", res);
  return (0);
}
*/