#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char    *ptr;
    size_t  i;

    ptr = s;
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return ((void *)ptr);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 4)
    {
        printf("before:  %s\n", argv[1]);
        ft_memset(argv[1], argv[2][0], atoi(argv[3]));
        printf("after:   %s\n", argv[1]);
    }
    return(0);
}
*/