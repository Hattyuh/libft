/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:22:58 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 11:34:22 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// #include "libft.h"
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int	c = 33;
// 	printf("Tested data:      %c - %d\n", c, c);
// 	printf("Original isascii: %d\n", isascii(c));
// 	printf("My isascii:       %d\n", ft_isascii(c));
// 	return(0);
// }
