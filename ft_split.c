/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:15:49 by aberenge          #+#    #+#             */
/*   Updated: 2024/10/14 16:39:28 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == sep)
			str++;
		if (*str)
			count++;
		while (*str && *str != sep)
			str++;
	}
	return (count);
}

static char	*malloc_word(char const *str, char sep)
{
	int		len;
	char	*word;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	word = (char *) malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = '\0';
	while (len--)
		word[len] = str[len];
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**tab;

	i = 0;
	words = count_words(s, c);
	tab = (char **) malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			tab[i++] = malloc_word(s, c);
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = 0;
	return (tab);
}
/*
int	main(void)
{
	char	*str = "Bonjour je suis Ambroise";
	char	sep = ' ';
	char	**res = ft_split(str, sep);
	int		i = 0;
	while (res[i] != 0)
		printf("%s\n", res[i++]);
	i = 0;
	while (res[i] != 0)
		free(res[i++]);
	free(res);
}*/
