/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-05 19:40:18 by aberenge          #+#    #+#             */
/*   Updated: 2024-09-05 19:40:18 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (str1[i] && str2[i] && i < (int) n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1 = "bonjour je suis";
	char	*s2 = "bonjour je suis";
	size_t n = 30;
	int	custom_res = ft_memcmp(s1, s2,  n);
	int	off_res = memcmp(s1, s2, n);

	printf("%d ; %d", custom_res, off_res);
}*/
