//#include <unistd.h>

int ft_isalpha(int c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
    {
        return 1;
    }
    else 
        return 0;
}
/*
int main(void)
{
    int c = 'Q';
    int r = ft_isalpha(c);
    r += '0';
    write(1, &r, 1);
    return (0);
}
*/