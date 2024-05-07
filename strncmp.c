// #include <stdio.h>
// #include <unistd.h>

int ft_strncmp(const char *s1, const char *s2, int size) {
  while ((*s1 != '\0' || *s2 != '\0') && size > 0) {
    if (*s1 != *s2) {
      return (*s1 - *s2);
    }
    size--;
    s1++;
    s2++;
  }
  return (0);
}
/*
int main(void) {
  const char *s1 = "lu";
  const char *s2 = "lucas";
  int size = 4;
  int res = ft_strncmp(s1, s2, size);
  printf("Testando %d\n", res);
  // res += '0';
  // write(1, &res, 1);
  return (0);
}
*/