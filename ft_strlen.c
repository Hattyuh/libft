/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:25:18 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 11:44:16 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	*str = "123456789";
// 	printf("string:          %s\n", str);
// 	printf("Original strlen: %lu\n", strlen(str));
// 	printf("My strlen:       %lu\n", ft_strlen(str));
//     return(0);
// }
