/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-06 07:21:28 by aberenge          #+#    #+#             */
/*   Updated: 2024-09-06 07:21:28 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return ((char *) haystack);
}
/*
int	main(void)
{
	const char	*haystack = "bonjour je suis ambroise";
	char	*needle = "ambroise";
	size_t	len = ft_strlen(haystack);
	char	*custom_res = ft_strnstr(haystack, needle, len);
	char	*off_res = strnstr(haystack, needle, len);

	printf("%s ; %s", custom_res, off_res);
}*/
