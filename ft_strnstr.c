/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 18:18:46 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 18:26:02 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;
	char	*little_start;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		while (big[i] != little[0] && i < len)
			i++;
		little_start = (char *)&big[i];
		j = 0;
		while (i < len && j < little_len && big[i] == little[j])
		{
			j++;
			i++;
		}
		if (little[j] == 0)
			return (little_start);
	}
	return (NULL);
}

// #include <bsd/string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	big[] = "abcdeabd";
// 	char	little[] = "dea";
// 	char	obig[] = "abcdeabd";
// 	char	olittle[] = "dea";
// 	size_t	len;
// 	len = 5;
// 	printf("Big text:         %s\n", big);
// 	printf("Little text:      %s\n", little);
// 	printf("Original strnstr: %s\n", strnstr(obig, olittle, len));
// 	printf("My strnstr:       %s\n", ft_strnstr(big, little, len));
// 	return (0);
// }
