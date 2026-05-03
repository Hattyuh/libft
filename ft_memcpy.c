/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:58:39 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 22:18:19 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*m_src;
	unsigned char	*m_dest;
	size_t			i;

	m_src = (unsigned char *)src;
	m_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		m_dest[i] = m_src[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char    orig[] = "abcde";
// 	char    mine[] = "abcde";
// 	size_t	n = 3;
//     printf("Source text:       %s\n", orig);
// 	memcpy(orig + 2, orig, n);
// 	printf("Original memcpy:   %s\n", orig);
// 	ft_memcpy(mine + 2, mine, n);
// 	printf("My memcpy:         %s\n", mine);
//     return (0);
// }
