/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:52:11 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 16:31:04 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*m_s1;
	unsigned char	*m_s2;
	size_t			i;

	m_s1 = (unsigned char *)s1;
	m_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (m_s1[i] != m_s2[i])
			return (m_s1[i] - m_s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	*s1 = "";
// 	char	*s2 = "";
// 	size_t	n = 2;
// 	printf("string 1:        %s\n", s1);
// 	printf("string 2:        %s\n", s2);
// 	printf("Original memcmp: %d\n", memcmp(s1, s2, n));
// 	printf("My memcmp:       %d\n", ft_memcmp(s1, s2, n));
//     return(0);
// }
