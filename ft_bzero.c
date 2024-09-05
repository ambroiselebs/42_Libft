/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-05 19:51:57 by aberenge          #+#    #+#             */
/*   Updated: 2024-09-05 19:51:57 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *) s;
	i = 0;
	while (i < (int) n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	res[12];

	ft_bzero(res, 11);
	printf("%s\n", res);
	bzero(res, 11);
	printf("%s\n", res);
}*/
