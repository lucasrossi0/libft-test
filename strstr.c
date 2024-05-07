// #include <stdio.h>
// #include <unistd.h>

char *ft_strstr(char *haystack, char *needle) {
  while (*haystack) {
    while (*needle != *haystack) {
      haystack++;
      if (*needle == *haystack) {
        return (haystack);
      }
    }
  }
  return (0);
}
/*
int main(void) {
  char *hay = "testando lucas";
  char *nee = "lu";
  char *res = ft_strstr(hay, nee);
  printf("%s\n", res);
  return (0);
}
*/