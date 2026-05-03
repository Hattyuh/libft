/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:13:44 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/03 17:13:45 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	new_len;
	char	*new_s;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_len = s1_len + s2_len;
	if (new_len == 0)
		return (NULL);
	new_s = malloc(new_len + 1);
	if (!new_s)
		return (NULL);
	new_s = ft_memcpy(new_s, s1, s1_len);
	ft_strlcat(new_s, s2, s2_len);
	return (new_s);
}

// #include <stdio.h>
// int main(void)
// {
//     char    *s1 = "123";
//     char    *s2 = "456";
//     char    *new_s = ft_strjoin(s1, s2);
//     printf("String 1: %s\n", s1);
//     printf("String 2: %s\n", s2);
//     printf("String n: %s\n", new_s);
//     free(new_s);
//     return ((0));
// }