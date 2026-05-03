/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:53:38 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/02 16:32:40 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	*str = "123456729";
// 	int		c = '2';
// 	printf("adress: %p, string:          %s\n", str, str);
// 	printf("adress: %p, Original strchr: %s\n", strchr(str, c), strchr(str, c));
// 	printf("adress: %p, My strchr:       %s\n", ft_strchr(str, c),
//		ft_strchr(str, c));
//     return(0);
// }
