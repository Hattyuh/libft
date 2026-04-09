#include <libft.h>

char    *ft_strrchr(const char *str, int c)
{
    int     i;
    char    *ptr;

    i = 0;
    ptr = NULL;
    while (str[i])
    {
        if (str[i] == c)
            ptr = &str[i];
        i++;
    }
    if (c == '\0')
        ptr = &str[i];
    return (ptr);
}