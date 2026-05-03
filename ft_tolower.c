/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:26:00 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 16:33:21 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include "libft.h"
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int	c = 65;
// 	printf("Tested data:      %c - %d\n", c, c);
// 	printf("Original tolower: %c - %d\n", tolower(c), tolower(c));
// 	printf("My tolower:       %c - %d\n", ft_tolower(c), ft_tolower(c));
// 	return(0);
// }
