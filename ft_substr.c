/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 19:32:25 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/03 11:11:50 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	sub_len;
	char	*sub;

	if (ft_strlen(s) <= start)
		return (NULL);
	if (len == 0)
		return (NULL);
	sub_len = ft_strlen(&s[start]);
	if (len < sub_len)
		sub = malloc(len + 1);
	else
		sub = malloc(sub_len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && i < sub_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str = "123456789";
// 	unsigned int index = 25;
// 	size_t len = 3;
// 	char *sub;
// 	sub = ft_substr(str, index, len);
// 	printf("String:     %s\n", str);
// 	printf("Sub string: %s\n", sub);
// 	free(sub);
// 	return (0);
// }