// #include <stdio.h>
// #include <unistd.h>

char *ft_strcat(char *s1, char *s2) {

  int i;
  int j;

  i = 0;
  while (s1[i] != '\0')
    i++;

  j = 0;
  while (s2[j] != '\0') {
    s1[i + j] = s2[j];
    j++;
  }
  s1[i + j] = '\0';
  return (s1);
}

/*
int main(void) {
  char s1[30] = "lucas";
  char *s2 = "rossi";
  char *res = ft_strcat(s1, s2);
  printf("%s\n", res);
  return (0);
}
*/