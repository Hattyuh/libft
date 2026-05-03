/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:56:59 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 16:31:32 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include <strings.h>
// int main(void)
// {
//     size_t	n = 0;
//     char	mine[] = "123456789";
// 	char	orig[] = "123456789";
// 	printf("Before:         %s\n", mine);
//	bzero(orig, n);
// 	ft_bzero(mine, n);
// 	printf("Original bzero: %s\n", orig);
// 	printf("My bzero:       %s\n", mine);
//     return(0);
// }
