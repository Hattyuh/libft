#include "libft.h"

int ft_isascii(int c)
{
    return (0 <= c && c <= 127);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%d\n", ft_isascii(argv[1][0]));
    return(0);
}
*/