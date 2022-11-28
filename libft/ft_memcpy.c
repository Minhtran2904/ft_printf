/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:16:17 by mitran            #+#    #+#             */
/*   Updated: 2022/10/31 12:16:19 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*des;
	char	*srs;

	i = 0;
	des = (char *)dst;
	srs = (char *)src;
	if ((dst != NULL || src != NULL || (dst != NULL && src != NULL)))
	{
		while (i < n)
		{
			des[i] = srs[i];
			i++;
		}
	}
	return (des);
}
