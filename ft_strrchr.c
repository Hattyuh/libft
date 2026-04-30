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
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 3)
        if (ft_strrchr(argv[1], argv[2][0]))
            printf("%s\n", ft_strrchr(argv[1], argv[2][0]));
    return (0);
}
*/