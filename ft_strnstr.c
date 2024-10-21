/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 07:21:28 by aberenge          #+#    #+#             */
/*   Updated: 2024/10/21 14:09:07 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *) big);
	while ((i + j) < len && big[i + j])
	{
		if ((unsigned char) big[i + j] == (unsigned char) little[j])
		{
			j++;
			if (j == (unsigned int) ft_strlen(little))
			{
				j--;
				return ((char *) &big[i]);
			}
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
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
