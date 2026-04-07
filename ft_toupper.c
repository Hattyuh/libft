#include "libft.h"

int ft_toupper(int c)
{
    if (ft_isupper(c))
        return (c - 32);
    return (c);    
}