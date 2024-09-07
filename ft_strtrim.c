/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-07 18:02:18 by aberenge          #+#    #+#             */
/*   Updated: 2024-09-07 18:02:18 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;

	res = (char *) malloc((ft_strlen(s1) * sizeof(char)) + 1);
	i = 0;
	j = 0;
	if (!res)
		return (NULL);
	while (s1[i])
	{
		if (!check_char(s1[i], set))
			res[j++] = s1[i];
		i++;
	}
	res[j] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	*s1 = "Bonjour je suis Ambroise";
	char	*set = "uoi";
	char	*res = ft_strtrim(s1, set);
	printf("%s\n", res);
	free(res);
}*/
