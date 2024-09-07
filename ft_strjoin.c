/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-07 17:52:36 by aberenge          #+#    #+#             */
/*   Updated: 2024-09-07 17:52:36 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ptr;

	ptr = (char *) malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	i = 0;
	j = 0;
	if (!ptr)
		return (NULL);
	while (s1[j])
		ptr[i++] = s1[j++];
	j = 0;
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*s1 = "Hello ";
	char	*s2 = "world";
	char	*res = ft_strjoin(s1, s2);
	printf("%s\n", res);
	free(res);
}*/
