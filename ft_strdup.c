/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:15:35 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 12:37:46 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		i;

	dup = malloc(ft_strlen(str) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	*str = "123";
// 	char	*orig = strdup(str);
// 	char	*mine = ft_strdup(str);
// 	printf("string:          %s, adress: %p\n", str, str);
// 	printf("Original strdup: %s, adress: %p\n", orig, orig);
// 	printf("My strdup:       %s, adress: %p\n", mine, mine);
// 	free(orig);
// 	free(mine);
//     return(0);
// }
