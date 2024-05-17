//#include <stdio.h>

char *ft_strncpy (char *to, const char *from, size_t size)
{
    int i;

    i = 0;
    while (from[i] != '\0' && size > 0)
    {
        to[i] = from[i];
        i++;
        size--;
        if (from[i] == '\0')
        {
            while(size > 0)
            {
                to[i] = '\0';
                i++;
                size--;
            }
        }
    }
    to[i] = '\0';
    return (to);
}
/*
int main(void)
{
    char from[5] = "lucas";
    printf("%s\n", from);
    char *to;
    //printf("%s\n", to);
    size_t size = 2;
    char *res = ft_strncpy(to, from, size);
    printf("%s\n", to);
    return (0);
}
*/