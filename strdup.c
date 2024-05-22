//#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *s) {
  int i;

  i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return (i);
}

char *ft_strcpy (char *to, const char *from)
{
    int i;

    i = 0;
    while (from[i] != '\0')
    {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
    return (to);
}

char *ft_strdup (const char *s)
{
    int len;
    char *res;

    len = ft_strlen(s);
    res = (char*) malloc(len * sizeof(char));
    if (res == NULL)
        return (NULL);
    res = ft_strcpy(res, s);
    return (res);
}
/*
int main(void)
{
    const char *s = "lucas";
    char *res = ft_strdup(s);
    printf("%s\n", res);
    return (0);
}
*/