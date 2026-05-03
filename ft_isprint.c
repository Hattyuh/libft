/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:58:05 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 11:34:33 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}

// #include "libft.h"
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int	c = 33;
// 	printf("Tested data:      %c - %d\n", c, c);
// 	printf("Original isprint: %d\n", isdigit(c));
// 	printf("My isprint:       %d\n", ft_isdigit(c));
// 	return(0);
// }
