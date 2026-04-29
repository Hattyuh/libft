#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    ft_procceed(size_t sec)
{
    int i;

    i = 0;
    while (i < 3)
    {
        write(1, ".", 1);
        usleep(sec);
        write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    char    control_input;
    char    test_input;
    char    str_input[100];
    int     part_count;
    int     test_count;
    int     version_count;
  
    printf("Welcome to my libft manual tester program\n");
    ft_procceed(250000);
    printf("Let me explain how it works\n");
    ft_procceed(250000);
    printf("At each exercise test, you will be prompted to give input\n");
    ft_procceed(250000);
    printf("Then you will see the function result\n");
    ft_procceed(250000);
    printf("You can test again with    [r]\n");
    ft_procceed(250000);
    printf("You can test the next with [c]\n");
    ft_procceed(250000);
    printf("Please press [ENTER] to start testing");
    while(control_input != '\n')
        control_input = getchar();
    ft_procceed(250000);

    part_count = 1;
    test_count = 0;
    version_count = 0;
    control_input = '0';
    while(control_input != 'c')
    {
        version_count++;
        test_input = '0';
        control_input = '0';

        printf("Test %d.%d.%d - isalpha\n", part_count, test_count, version_count);
        printf("Enter a char to test: ");
        scanf(" %c", &test_input);
        printf("isalpha: %i\n", ft_isalpha(test_input));
        
        printf("Please enter [c] to continue or [r] to retest: ");
        while (control_input != 'c' && control_input != 'r')
            scanf(" %c", &control_input);
        printf("\n");
    }

    test_count++;
    version_count = 0;
    control_input = '0';
    while(control_input != 'c')
    {
        version_count++;
        test_input = '0';
        control_input = '0';

        printf("Test %d.%d.%d - isdigit\n", part_count, test_count, version_count);
        printf("Enter a char to test: ");
        scanf(" %c", &test_input);
        printf("isdigit: %i\n", ft_isdigit(test_input));
        
        printf("Please enter [c] to continue or [r] to retest: ");
        while (control_input != 'c' && control_input != 'r')
            scanf(" %c", &control_input);
        printf("\n");
    }

    test_count++;
    version_count = 0;
    control_input = '0';
    while(control_input != 'c')
    {
        version_count++;
        test_input = '0';
        control_input = '0';

        printf("Test %d.%d.%d - isalnum\n", part_count, test_count, version_count);
        printf("Enter a char to test: ");
        scanf(" %c", &test_input);
        printf("isalnum: %i\n", ft_isalnum(test_input));
        
        printf("Please enter [c] to continue or [r] to retest: ");
        while (control_input != 'c' && control_input != 'r')
            scanf(" %c", &control_input);
        printf("\n");
    }

    test_count++;
    version_count = 0;
    control_input = '0';
    while(control_input != 'c')
    {
        version_count++;
        test_input = '0';
        control_input = '0';

        printf("Test %d.%d.%d - isascii\n", part_count, test_count, version_count);
        printf("Enter a char to test: ");
        scanf(" %c", &test_input);
        printf("isascii: %i\n", ft_isascii(test_input));
        
        printf("Please enter [c] to continue or [r] to retest: ");
        while (control_input != 'c' && control_input != 'r')
            scanf(" %c", &control_input);
        printf("\n");
    }

    test_count++;
    version_count = 0;
    control_input = '0';
    while(control_input != 'c')
    {
        version_count++;
        test_input = '0';
        control_input = '0';

        printf("Test %d.%d.%d - isprint\n", part_count, test_count, version_count);
        printf("Enter a char to test: ");
        scanf(" %c", &test_input);
        printf("isprint: %i\n", ft_isprint(test_input));
        
        printf("Please enter [c] to continue or [r] to retest: ");
        while (control_input != 'c' && control_input != 'r')
            scanf(" %c", &control_input);
        printf("\n");
    }

    test_count++;
    version_count = 0;
    control_input = '0';
    while(control_input != 'c')
    {
        version_count++;
        control_input = '0';

        printf("Test %d.%d.%d - strlen\n", part_count, test_count, version_count);
        printf("Enter a string to test: ");
        scanf(" %s", str_input);
        printf("strlen: %li\n", ft_strlen(str_input));
        
        printf("Please enter [c] to continue or [r] to retest: ");
        while (control_input != 'c' && control_input != 'r')
            scanf(" %c", &control_input);
        printf("\n");
    }
/*
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
    printf("Testing atoi\n");
    atoi_nbr = "   5 423sdsad";
    printf("%i\n", ft_atoi(atoi_nbr));
    printf("\n");

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
    
*/
    return (0);
}