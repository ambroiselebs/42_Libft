/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:21:32 by aberenge          #+#    #+#             */
/*   Updated: 2024/10/21 15:11:29 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*source;
	unsigned char		*dest;

	source = (const unsigned char *) src;
	dest = (unsigned char *) dst;
	if (dest == source)
		return (dst);
	if (dest > source)
		while (len--)
			dest[len] = source[len];
	else
		while (len--)
			*dest++ = *source++;
	return (dst);
}
/*
int	main(void)
{
	char	src[50] = "123456";
	ft_memmove(src + 2, src, 4);
	printf("%s\n", src);
}*/
