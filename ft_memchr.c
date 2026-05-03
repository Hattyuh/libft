/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:23:29 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/03 17:16:38 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	*str = "123456729";
// 	int		c = '2';
// 	size_t	n = 2;
// 	printf("adress: %p string:           %s\n", str, str);
// 	printf("adress: %p ", memchr(str, c, n));
// 	printf("Original memchr: %s\n", (char *)memchr(str, c, n));
// 	printf("adress: %p ", ft_memchr(str, c, n));
// 	printf("My memchr:       %s\n", (char *)(char *)ft_memchr(str, c, n));
//     return(0);
// }
