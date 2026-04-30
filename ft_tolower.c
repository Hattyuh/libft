#include "libft.h"

int ft_tolower(int c)
{
    if ('A' <= c && c <= 'Z')
        return (c + 32);
    return (c);    
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%c\n", ft_tolower(argv[1][0]));
    return(0);
}
*/