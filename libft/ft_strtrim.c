/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:56:51 by mitran            #+#    #+#             */
/*   Updated: 2022/10/27 14:56:52 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	i;
	size_t	first;
	size_t	last;

	first = 0;
	last = ft_strlen(s1);
	while (s1[first] && is_set(s1[first], set))
		first++;
	while (last > first && is_set(s1[last - 1], set))
		last--;
	trimmed_str = (char *)malloc(sizeof(char) * (last - first + 1));
	if (!trimmed_str)
		return (NULL);
	i = 0;
	while (first < last)
		trimmed_str[i++] = s1[first++];
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
