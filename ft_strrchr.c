/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-05 15:28:19 by aberenge          #+#    #+#             */
/*   Updated: 2024-09-05 15:28:19 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	found;
	int	i;

	found = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			found = i;
		i++;
	}
	if (found != -1)
		return ((char *) &s[found]);
	return (NULL);
}
