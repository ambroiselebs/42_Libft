/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-07 09:47:02 by aberenge          #+#    #+#             */
/*   Updated: 2024-09-07 09:47:02 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length >= dstsize)
		dest_length = dstsize;
	while (src[i] && dest_length + i < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = 0;
	return (dest_length + src_length);
}

/* int	main(void)
{
	char	dst[12] = "gugtfhg";
	char	*src = " ytfgy";
	size_t	res;

	res = ft_strlcat(dst, src, 12);
	printf("%s : %zu\n",dst, res);
} */
