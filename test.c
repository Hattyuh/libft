#include "libft.h"
#include <stdio.h>

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
    printf("Testing bzero\n");
    printf("before:  %s\n", bzero_str);
    ft_bzero(bzero_str, 8);
    printf("after:   %s\n", bzero_str);
    printf("\n");

    //MEMCPY
    //MEMCPY
    //STRLCPY
    //STRLCAT

    //TOUPPER AND TOLOWER
    c = 'n';
    printf("TESTING: %c\n", c);
    printf("toupper: %c\n", ft_toupper(c));
    c = 'N';
    printf("TESTING: %c\n", c);
    printf("tolower: %c\n", ft_tolower(c));
 
    //STRCHR
    //STRRCHR
    //STRCMP
    //MEMCHR
    //STRNSTR
    //ATOI
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