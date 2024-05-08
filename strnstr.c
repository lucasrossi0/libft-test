// #include <stdio.h>
// #include <unistd.h>

char *ft_strnstr(char *haystack, char *needle, int len) {
  if (len < 0)
    return (0);
  while (*haystack && len > 0) {
    while (*needle != *haystack && len > 0) {
      haystack++;
      if (*needle == *haystack) {
        return haystack;
      }
      len--;
    }
  }
  return (0);
}
/*
int main(void) {
  char *hay = "tetedolucas";
  char *nee = "s";
  int len = 15;
  char *res = ft_strnstr(hay, nee, len);
  printf("%s\n", res);
  return (0);
}
*/