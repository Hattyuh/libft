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
/*
#include <unistd.h>
int main(int argc, char **argv)
{
    int     i;
    char    *ptr;
    char    memcpy_deststr[100];

    if (argc == 3)
    {
        write(1, "Source text: ", 13);
        ptr = argv[1];
        while (*ptr)
        {
            write(1, ptr, 1);
            ptr++;
        }
        write(1, "\n", 1);

        ft_memcpy(memcpy_deststr, argv[1], atoi(argv[2]));
        
        write(1, "Dest text:   ", 13);
        ptr = memcpy_deststr;
        i = 0;
        while (i < atoi(argv[2]))
        {
            write(1, ptr, 1);
            ptr++;
            i++;
        }
        write(1, "\n", 1);
    }
    return(0);
}
*/