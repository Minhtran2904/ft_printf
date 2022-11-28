/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:08:23 by mitran            #+#    #+#             */
/*   Updated: 2022/10/31 13:08:25 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*des;
	char	*srs;

	i = 0;
	des = (char *)dst;
	srs = (char *)src;
	if (des > srs)
	{
		while (len-- > 0)
		{
			des[len] = srs[len];
		}
	}
	else
	{
		ft_memcpy(des, srs, len);
	}
	return (des);
}
