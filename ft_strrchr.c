/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:16:29 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 16:40:07 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (str[i])
	{
		if (str[i] == c)
			ptr = (char *)&str[i];
		i++;
	}
	if (c == '\0')
		ptr = (char *)&str[i];
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	*str = "122456789";
// 	int		c = '2';
// 	printf("adress: %p string:           %s\n", str, str);
// 	printf("adress: %p ", strrchr(str, c));
// 	printf("Original strrchr: %s\n", strrchr(str, c));
// 	printf("adress: %p ", ft_strrchr(str, c));
// 	printf("My strrchr:       %s\n", ft_strrchr(str, c));
//     return(0);
// }
