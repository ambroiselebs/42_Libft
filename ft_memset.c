/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-05 19:28:56 by aberenge          #+#    #+#             */
/*   Updated: 2024-09-05 19:28:56 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *) b;
	i = 0;
	while (i < (int) len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

/* int	main(void)
{
	char b[12];
	void *custom_res = ft_memset(b, 'a', 11);
	void *official_res = memset(b, 'a', 11);

	printf("%s ; %s", (char *) custom_res, (char *) official_res);
} */
