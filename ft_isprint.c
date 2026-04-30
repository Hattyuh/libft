#include "libft.h"

int ft_isprint(int c)
{
    return (32 <= c && c <= 126);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%d\n", ft_isprint(argv[1][0]));
    return(0);
}
*/