#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return ((char *)&str[i]);
        i++;
    }
    if (c == '\0')
        return ((char *)&str[i]);
    return (NULL);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 3)
        if (ft_strchr(argv[1], argv[2][0]))
            printf("%s\n", ft_strchr(argv[1], argv[2][0]));
    return (0);
}
*/