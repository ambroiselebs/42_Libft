/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-07 08:12:08 by aberenge          #+#    #+#             */
/*   Updated: 2024-09-07 08:12:08 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
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
