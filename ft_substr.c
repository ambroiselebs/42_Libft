/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-07 17:40:51 by aberenge          #+#    #+#             */
/*   Updated: 2024-09-07 17:40:51 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	ptr = malloc((len - start) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (start < len)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*s = "Hello world";
	char	*res = ft_substr(s, 6, 12);
	printf("%s\n", res);
	free(res);
}*/
