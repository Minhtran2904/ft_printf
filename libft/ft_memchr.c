/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:06:42 by mitran            #+#    #+#             */
/*   Updated: 2022/11/02 10:06:43 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*chr;
	unsigned char	converted_c;
	size_t			i;

	chr = (unsigned char *)s;
	converted_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (chr[i] == converted_c)
		{
			return ((void *)(&chr[i]));
		}
		i++;
	}
	return (NULL);
}
