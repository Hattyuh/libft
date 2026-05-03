/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:57:33 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 11:34:18 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

// #include "libft.h"
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int	c = 33;
// 	printf("Tested data:      %c - %d\n", c, c);
// 	printf("Original isalpha: %d\n", isalpha(c));
// 	printf("My isalpha:       %d\n", ft_isalpha(c));
// 	return(0);
// }
