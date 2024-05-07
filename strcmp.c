// #include <stdio.h>
// #include <unistd.h>

int ft_strcmp(const char *s1, const char *s2) {
  while (*s1 != '\0' || *s2 != '\0') {
    if (*s1 != *s2) {
      return (*s1 - *s2);
    }
    s1++;
    s2++;
  }
  return (0);
}
/*
int main(void) {
  const char *s1 = "lucas";
  const char *s2 = "luc";
  int res = ft_strcmp(s1, s2);
  printf("Resultado %d\n", res);
  return (0);
}
*/