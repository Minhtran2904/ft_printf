/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:46:05 by mitran            #+#    #+#             */
/*   Updated: 2022/11/02 15:46:06 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
	{
		return (ft_calloc(1, 1));
	}
	if ((count * size) % size != 0)
	{
		return (NULL);
	}
	ptr = malloc(count * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero (ptr, size * count);
	return (ptr);
}
