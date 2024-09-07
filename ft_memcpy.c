/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-06 07:34:28 by aberenge          #+#    #+#             */
/*   Updated: 2024-09-06 07:34:28 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	const unsigned char	*source;
	unsigned char		*dest;
	size_t				i;

	dest = (unsigned char *) dst;
	source = (const unsigned char *) src;
	i = 0;
	while (i < len)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst[12];
	char	*src = "abcdefgwcks";
	size_t	len = 11;

	ft_memcpy((void *) dst, (void *) src, len);
	printf("%s\n", (char *) dst);
	memcpy((void *) dst, (void *) src, len);
	printf("%s\n", (char *) dst);
}*/
