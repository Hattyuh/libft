#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    int     i;
    char    *ptr;

    i = 0;
    ptr = NULL;
    while (str[i])
    {
        if (str[i] == c)
            ptr = (char *)&str[i];
        i++;
    }
    if (c == '\0')
        ptr = (char *)&str[i];
    return (ptr);
}