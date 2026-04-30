#include "libft.h"

int ft_isdigit(int c)
{
    return ('0' <= c && c <= '9');
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%d\n", ft_isdigit(argv[1][0]));
    return(0);
}
*/