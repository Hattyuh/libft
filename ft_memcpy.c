#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *m_src;
    unsigned char   *m_dest;
    size_t          i;
    
    m_src = (unsigned char *)src;
    m_dest = (unsigned char *)dest;
    i = 0;
    while (i < n)
    {
        m_dest[i] = m_src[i];
        i++;
    }
    return (dest);
}