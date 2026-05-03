/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 18:02:39 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 16:32:46 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	while (dst[i])
		i++;
	while (j < size)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + dst_len);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main(void)
// {
// 	char	*src = "123";
// 	char	dst[10] = "123";
// 	size_t	size = 2;
// 	size_t	len;
// 	printf("Source:          %s\n", src);
// 	len = strlcat(dst, src, size);
// 	printf("Original strlcat: %s, length: %lu\n", dst, len);
// 	len = ft_strlcat(dst, src, size);
// 	printf("My strlcat:       %s, length: %lu\n", dst, len);
//     return(0);
// }