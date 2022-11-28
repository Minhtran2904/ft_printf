/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:09:03 by mitran            #+#    #+#             */
/*   Updated: 2022/11/03 12:09:04 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_array(const char *str, char c)
{
	size_t		count;
	size_t		i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static	int	count_size(const char *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] && s[i] != c)
	{
		size++;
		i++;
	}
	return (size);
}

static char	**ft_checknfree(char **results, int j)
{
	while (j-- > 0)
	{
		free(results[j]);
	}
	free(results);
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		word;
	int		size;
	char	**results;

	i = 0;
	j = -1;
	word = count_array(s, c);
	results = (char **)malloc(sizeof(char *) * (word + 1));
	if (!results)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = count_size(s, c, i);
		results[j] = ft_substr(s, i, size);
		if (!results[j])
			return (ft_checknfree(results, j));
		i += size;
	}
	results[j] = 0;
	return (results);
}
