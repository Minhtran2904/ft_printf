/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:35:41 by mitran            #+#    #+#             */
/*   Updated: 2022/11/02 11:35:42 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*my_s1;
	unsigned char	*my_s2;
	size_t			i;

	my_s1 = (unsigned char *)s1;
	my_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (my_s1[i] != my_s2[i])
		{
			return (my_s1[i] - my_s2[i]);
		}
		i++;
	}
	return (0);
}
