#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int n;
    int sign;

    i = 0;
    n = 0;
    sign = 1;
    while (str[i] && str[i] == ' ')
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = -1; 
         i++; 
    }
    while (ft_isdigit(str[i]))
    {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    return (n * sign);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%d\n", ft_atoi(argv[1]));
    return(0);
}
*/