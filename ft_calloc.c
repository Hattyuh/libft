/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:21:39 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 18:44:55 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (0);
		return (ptr);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n = 5;
// 	int	*orig = calloc(n, sizeof(int));
// 	int	*mine = ft_calloc(n, sizeof(int));
// 	int	i = 0;
// 	printf("Original calloc: ");
// 	while (i < n)
// 	{
// 		printf("%d ", orig[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("My calloc:       ");
// 	i = 0;
// 	while (i < n)
// 	{
// 		printf("%d ", mine[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(orig);
// 	free(mine);
// }