#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    void    *m_temp;

    ft_memcpy(m_temp, src, n);
    ft_memcpy(dest, m_temp, n);
    return(dest);
}