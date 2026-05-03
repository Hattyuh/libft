/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 13:03:58 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/03 12:49:18 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*m_src;
	unsigned char	*m_dest;

	m_src = (unsigned char *)src;
	m_dest = (unsigned char *)dest;
	if (m_src < m_dest)
	{
		while (n-- > 0)
			m_dest[n] = m_src[n];
	}
	else
		ft_memcpy(dest, src, n);
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
// 	memmove(orig + 4, orig, n);
// 	printf("Original memcpy:   %s\n", orig);
//     ft_memmove(mine + 4, mine, n);
// 	printf("My memcpy:         %s\n", mine);
//     return (0);
// }
