#include "libft.h"

char    *ft_strdup(const char *str)
{
    char	*dup;
	int		i;

	dup = malloc(ft_strlen(str) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	char	*new_str;

    if (argc == 2)
    {
        printf("Source string: %s, Source adress: %p\n", argv[1], &argv[1]);
		new_str = ft_strdup(argv[1]);
		printf("Dupped string: %s, Dupped adress: %p\n", new_str, &new_str);
		free(new_str);
    }
    return(0);
}
*/