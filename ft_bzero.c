#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char    *ptr;
    size_t  i;

    ptr = s;
    i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}
/*
#include <unistd.h>
int main(int argc, char **argv)
{
    int     i;
    char    *ptr;

    if (argc == 3)
    {
        write(1, "before:  ", 9);
        ptr = argv[1];
        i = 0;
        while (*ptr)
        {
            write(1, ptr, 1);
            ptr++;
            i++;
        }
        write(1, "\n", 1);

        ft_bzero(argv[1], atoi(argv[2]));
        
        write(1, "after:   ", 9);
        ptr = argv[1];
        while (i > 0)
        {
            write(1, ptr, 1);
            ptr++;
            i--;
        }
        write(1, "\n", 1);
    }
    return(0);
}
*/