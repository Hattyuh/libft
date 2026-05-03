/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:54:38 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 12:29:14 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (!s1[i] || s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	*s1 = "1";
// 	char	*s2 = "12";
// 	size_t	n = 2;
// 	printf("string 1:         %s\n", s1);
// 	printf("string 2:         %s\n", s2);
// 	printf("Original strncmp: %d\n", strncmp(s1, s2, n));
// 	printf("My strncmp:       %d\n", ft_strncmp(s1, s2, n));
//     return(0);
// }
