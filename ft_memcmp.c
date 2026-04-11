#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *m_s1;
    unsigned char   *m_s2;
    size_t  i;

    m_s1 = s1;
    m_s2 = s2;
    i = 0;
    while (i < n)
    {
        if(m_s1[i] != m_s2[i])
            return (m_s1[i] - m_s2[i]);
        i++
    }
    return (0);
}