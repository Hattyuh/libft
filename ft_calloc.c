#include "libft.h"

void    *ft_calloc(size_t number, size_t size)
{
    char    *ptr;
    size_t  i;

    if (size != 0 && number > SIZE_MAX / size)
        return (NULL);
    ptr = malloc(number * size);
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < number * size)
    {
        ptr[i] = 0;
        i++;
    }
    return ((void *)ptr);
}