/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:40:18 by aberenge          #+#    #+#             */
/*   Updated: 2024/10/17 16:02:35 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
		i++;
	if (i < n)
		return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
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
