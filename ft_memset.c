/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:24:27 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 12:02:45 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		*ptr = (unsigned char)c;
		i++;
		ptr++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     size_t	n = 10;
// 	int		c = 33;
//     char	mine[] = "123456789";
// 	char	orig[] = "123456789";
// 	printf("Before:          %s\n", mine);
// 	memset(orig, c, n);
// 	ft_memset(mine, c, n);
// 	printf("Original memset: %s\n", orig);
// 	printf("My memset:       %s\n", mine);
//     return(0);
// }
