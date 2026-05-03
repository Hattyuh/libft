/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 21:25:44 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/03 12:18:47 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_getstart(char const *s1, char const *set)
{
	int	i;
	int	isinset;

	isinset = 0;
	i = 0;
	while (s1[i] != 0)
	{
		isinset = ft_isinset(s1[i], set);
		if (!isinset)
			return ((char *)&s1[i]);
		i++;
	}
	return ((char *)s1);
}

static char	*ft_getend(char const *s1, char const *set)
{
	size_t	len;
	int		isinset;
	size_t	i;

	len = ft_strlen(s1);
	isinset = 0;
	i = 0;
	while (i < len - 1)
	{
		isinset = ft_isinset(s1[len - 1 - i], set);
		if (!isinset)
			return ((char *)&s1[len - 1 - i]);
		i++;
	}
	if (s1 == &s1[len - 1 - i])
	{
		return ((char *)s1);
	}
	return ((char *)&s1[len - 1]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*start;
	char const	*end;
	size_t		n;
	char		*new_str;

	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	n = end - start + 1;
	if (s1 == end)
	{
		new_str = malloc(1);
		new_str[0] = '\0';
		return (new_str);
	}
	new_str = malloc(n + 1);
	ft_memcpy(new_str, start, n);
	new_str[n + 1] = '\0';
	return (new_str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *str = "123456789";
// 	char *set = "128934";
// 	char *trm;
// 	trm = ft_strtrim(str, set);
// 	printf("Original string: %s\n", str);
// 	printf("Trimmed string:  %s\n", trm);
// 	free(trm);
// }