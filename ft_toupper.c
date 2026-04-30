#include "libft.h"

int ft_toupper(int c)
{
    if ('a' <= c && c <= 'z')
        return (c - 32);
    return (c);    
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%c\n", ft_toupper(argv[1][0]));
    return(0);
}
*/