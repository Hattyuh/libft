/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 18:02:08 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 16:24:23 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main(void)
// {
// 	char	*src = "123";
// 	char	dst[10];
// 	size_t	size = 5;
// 	size_t	len;
// 	printf("Source:           %s\n", src);
// 	len = strlcpy(dst, src, size);
// 	printf("Original strlcpy: %s, length: %lu\n", dst, len);
// 	len = ft_strlcpy(dst, src, size);
// 	printf("My strlcpy:       %s, length: %lu\n", dst, len);
//     return(0);
// }