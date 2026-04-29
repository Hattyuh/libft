#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int main(void)
{
//PART I
    //Character classification function test
    char    c;
    c = '5';
    printf("Testing character classification functions\n");
    printf("Char:    %c\n", c);
    printf("isalpha: %i\n", ft_isalpha(c));
    printf("isdigit: %i\n", ft_isdigit(c));
    printf("isalnum: %i\n", ft_isalnum(c));
    printf("isascii: %i\n", ft_isascii(c));
    printf("isprint: %i\n", ft_isprint(c));
    printf("\n");

    //STRLEN
    char    *strlen_str = "123456789";
    printf("Testing strlen\n");
    printf("String: %s\n", strlen_str);
    printf("Length: %li\n", ft_strlen(strlen_str));
    printf("\n");

    //MEMSET
    char    memset_str[] = "123456789";
    printf("Testing memset\n");
    printf("before:  %s\n", memset_str);
    ft_memset(memset_str, 'X', 8);
    printf("after:   %s\n", memset_str);
    printf("\n");

    //BZERO
    char    bzero_str[] = "123456789";
    int     i;
    char    *ptr;

    printf("Testing bzero\n");
    write(1, "before:  ", 9);
    ptr = bzero_str;
    i = 0;
    while (i < 9)
    {
        write(1, ptr, 1);
        ptr++;
        i++;
    }
    printf("\n");

    ft_bzero(bzero_str, 2);

    write(1, "after:   ", 9);
    ptr = bzero_str;
    i = 0;
    while (i < 9)
    {
        write(1, ptr, 1);
        ptr++;
        i++;
    }
    printf("\n\n");

    //MEMCPY
    char    memcpy_srcstr[] = "123456789";
    char    memcpy_deststr[] = "        ";
    
    printf("Testing memcpy\n");
    write(1, "Source text: ", 13);
    ptr = memcpy_srcstr;
    i = 0;
    while (i < 9)
    {
        write(1, ptr, 1);
        ptr++;
        i++;
    }
    printf("\n");
    
    ft_memcpy(memcpy_deststr, memcpy_srcstr, 5);
    
    write(1, "Dest text:   ", 13);
    ptr = memcpy_deststr;
    i = 0;
    while (i < 9)
    {
        write(1, ptr, 1);
        ptr++;
        i++;
    }
    printf("\n\n");

    //MEMMOVE
    //STRLCPY
    //STRLCAT

    //TOUPPER AND TOLOWER
    c = 'n';
    printf("TESTING: %c\n", c);
    printf("toupper: %c\n", ft_toupper(c));
    c = 'N';
    printf("TESTING: %c\n", c);
    printf("tolower: %c\n", ft_tolower(c));
    printf("\n");

    //STRCHR
    //STRRCHR
    //STRCMP
    //MEMCHR
    //STRNSTR
    //ATOI
    char    *atoi_nbr;
    atoi_nbr = "   5 423sdsad";
    printf("%i\n", ft_atoi(atoi_nbr));
    
    //CALLOC
    //STRDUP
 
//PART 2

    //SUBSTR
    //STRJOIN
    //STRTRIM
    //SPLIT
    //ITOA
    //STRMAPI
    //STRITERI
    //PUTCHAR_FD
    //PUTSTR_FD
    //PUTENDL_FD
    //PUTNBR_FD

//PART 3

    //LSTNEW
    //LSTADD_FRONT
    //LSTSIZE
    //LSTLAST
    //LSTADD_BACK
    //LSTDELONE
    //LSTCLEAR
    //LSTITER
    //LSTMAP

//PART 4
    //TODO: add README
    return (0);
}