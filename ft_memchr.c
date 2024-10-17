/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-05 15:57:28 by aberenge          #+#    #+#             */
/*   Updated: 2024-09-05 15:57:28 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*str == (unsigned char) c)
			return ((void *) str);
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	void 	*found = memchr("je suis ambroise", 'b', 12);
	void	*found2 = ft_memchr("je suis ambroise", 'b', 12);
	if ( found != NULL ) {
		printf("%d ; %d", *((char *) found2), *((char *) found));
	}
}*/
