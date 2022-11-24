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

int	my_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (1);
}

int	my_putchar(int a)
{
	write (1, &a, 1);
	return (1);
}

int	my_formats(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += my_putchar(va_arg(args, int));
	else if (format == 's')
		len += my_putstr(va_arg(args, char *));
	else if (format == 'p')
		len += ptr_print(va_arg(args, unsigned long long));
	return (len);
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
			len += my_formats(args, s[i + 1]);
			i++;
		}
		else
		{
			len += my_putchar(s[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
