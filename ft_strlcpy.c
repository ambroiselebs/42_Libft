/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 08:12:08 by aberenge          #+#    #+#             */
/*   Updated: 2024/10/21 14:18:05 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	count = 0;
	if (dstsize <= 0)
		return (src_len);
	while (count < dstsize - 1)
	{
		if (src[count] == '\0')
			break ;
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
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
