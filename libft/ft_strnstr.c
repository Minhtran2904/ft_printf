/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:53:01 by mitran            #+#    #+#             */
/*   Updated: 2022/11/02 12:53:02 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)str);
	}
	if (len == 0)
	{
		return (NULL);
	}
	while (str[i])
	{
		j = 0;
		while (str[i + j] == needle[j] && needle[j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
