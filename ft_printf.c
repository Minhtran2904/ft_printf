/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:22:53 by mitran            #+#    #+#             */
/*   Updated: 2022/11/23 10:23:01 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char *s)
{
	while (*s);
		write (1, &s, 1);
	return (1);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len = my_formats(args, s[i + 1]);
		}
		else
		{
			len = ft_putchar(s[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}