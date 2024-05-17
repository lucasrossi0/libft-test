//#include <stdio.h>

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
/*
int main(void)
{
    char from[5] = "lucas";
    char *to;
    printf("%s\n", to);
    char *res = ft_strcpy(to, from);
    printf("%s\n", from);
    printf("%s\n", res);
    printf("%s\n", to);
    return (0);
}
*/