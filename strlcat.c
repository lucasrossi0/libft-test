#include <stdio.h>

int ft_strlcat(char *to, char *from, int size)
{
    int i;
    int j;

    i = 0;
    while (to[i] != '\0') {
        i++;
    }
    if (size <= 0)
        return (i);
    j = 0;
    while (from[j] != '\0' || size != 0) {
        to[i] = from[j];
        i++;
        j++;
        size--;
  }
    to[i] = '\0';

    return (i);
}

int main(void)
{
    char to[8] = "lucas";
    char from[8] = "rossi";
    int size = 3;
    int res = ft_strlcat(to, from, size);
    printf("%d\n", res);
    return (0);
}