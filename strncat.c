// #include <stdio.h>
// #include <unistd.h>

char *ft_strncat(char *to, char *from, int size) {
  int i;
  int j;

  if (size <= 0)
    return (to);

  i = 0;
  while (to[i] != '\0') {
    i++;
  }
  j = 0;
  while (from[j] != '\0' || size != 0) {
    to[i] = from[j];
    i++;
    j++;
    size--;
  }
  to[i] = '\0';
  return (to);
}
/*
int main(void) {
  char s1[11] = "lucas";
  char *s2 = "rossi";
  int s = 5;
  char *res = ft_strncat(s1, s2, s);
  printf("%s\n", res);
  return (0);
}
*/