#include "libft.h"

int ft_isalpha(int c)
{
    return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%d\n", ft_isalpha(argv[1][0]));
    return(0);
}
*/