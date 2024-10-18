/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:02:18 by aberenge          #+#    #+#             */
/*   Updated: 2024/10/18 16:09:30 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char c, char const *set)
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
	int		start;
	int		end;
	int		i;

	start = 0;
	while (s1[start] && check_char(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && check_char(s1[end], set))
		end--;
	res = (char *) malloc((end - start + 2) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (start <= end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	*s1 = "lorem ipsum dolor sit amet";
	char	*set = "te";
	char	*res = ft_strtrim(s1, set);
	printf("%s\n\n\n", res);
	free(res);
}*/
