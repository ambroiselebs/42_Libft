/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 08:12:08 by aberenge          #+#    #+#             */
/*   Updated: 2024/10/18 17:00:02 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!src || !src)
		return (0);
	if (!dst && dstsize > 0)
		return (0);
	i = 0;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
	{
		dst[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dst[12] = "gugtfhg";
	char	*src = " ytfgy";
	size_t	res;

	res = ft_strlcpy(dst, src, 12);
	printf("%s : %zu\n",dst, res);
	res = strlcpy(dst, src, 12);
	printf("%s : %zu", dst, res);
}*/
