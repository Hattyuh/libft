/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:51:15 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 11:34:29 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

// #include "libft.h"
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int	c = 33;
// 	printf("Tested data:      %c - %d\n", c, c);
// 	printf("Original isdigit: %d\n", isdigit(c));
// 	printf("My isdigit:       %d\n", ft_isdigit(c));
// 	return(0);
// }
