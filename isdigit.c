//#include <unistd.h>

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    else 
        return (0);
}
/*
int main(void)
{
    int c = 49;
    int r = ft_isdigit(c);
    r += '0';
    write(1, &r, 1);
    return (0);
}
*/