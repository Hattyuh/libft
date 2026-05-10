/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkosa <rkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:13:38 by rkosa             #+#    #+#             */
/*   Updated: 2026/05/03 17:13:39 by rkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *str, char c)
{
	int		i;
	int		inword;
	size_t	wordcount;

	wordcount = 0;
	inword = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			wordcount++;
			inword = 1;
		}
		while (inword && str[i])
		{
			if (str[i] == c)
				inword = 0;
			i++;
		}
	}
	return (wordcount);
}

static char	*ft_getword(const char *wordstart, char c)
{
	char	*word;
	size_t	len;

	len = 0;
	while (wordstart[len] != c && wordstart[len] != '\0')
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, wordstart, len);
	word[len] = '\0';
	return (word);
}

char	**ft_split(const char *str, char c)
{
	int		i;
	int		inword;
	size_t	wordcount;
	size_t	currentword;
	char	**words;

	currentword = 0;
	wordcount = ft_countwords(str, c);
	words = malloc((wordcount + 1) * sizeof(char *));
	if (!words)
	{
		return (NULL);
	}
	inword = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			words[currentword] = ft_getword(&str[i], c);
			currentword++;
			inword = 1;
		}
		while (inword && str[i])
		{
			if (str[i] == c)
				inword = 0;
			i++;
		}
	}
	words[currentword] = NULL;
	return (words);
}

#include <stdio.h>

int	main(void)
{
	char *str = "A few words that needs to be   separated";
	char c = ' ';
	char **words;
	int i;

	words = ft_split(str, c);
	i = 0;
	while (words[i])
	{
		printf("%s\n", words[i]);
		i++;
	}
	free(words);
	return (0);
}