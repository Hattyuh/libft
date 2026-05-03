/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:48:33 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 11:34:10 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int	c = 33;
// 	printf("Tested data:      %c - %d\n", c, c);
// 	printf("Original isalnum: %d\n", isalnum(c));
// 	printf("My isalnum:       %d\n", ft_isalnum(c));
// 	return(0);
// }
