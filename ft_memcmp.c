#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *m_s1;
    unsigned char   *m_s2;
    size_t  i;

    m_s1 = (unsigned char *)s1;
    m_s2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if(m_s1[i] != m_s2[i])
            return (m_s1[i] - m_s2[i]);
        i++;
    }
    return (0);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 4)
        printf("%d\n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
    return (0);
}
*/