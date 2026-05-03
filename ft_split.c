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

static size_t   ft_countwords(const char *str, char c)
{
    int     i;
    int     inword;
    size_t  wordcount;

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

static char *ft_extractword(const char *wordstart, char c)
{
    char    *word;
    size_t  len;

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

#include <stdio.h>
int	main(void)
{
    char    *str = "Afew words that needs to be   separate";
    char    c = ' ';
    // char    **words;
    // int     i;
    //words = ft_split(str, c);
    char    *extractedword;

    extractedword = ft_extractword(str, c);
    printf("Word count:     %lu\n", ft_countwords(str, c));
    printf("Extracted word: %s\n", extractedword);
    // i = 0;
    // while (i < 8)
    // {
    //     printf(words[i]);
    //     i++;
    // }
    free(extractedword);
	return (0);
}