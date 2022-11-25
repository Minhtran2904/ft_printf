/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_hexprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:06:14 by mitran            #+#    #+#             */
/*   Updated: 2022/11/25 10:06:15 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

void	putnbr_hex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		putnbr_hex(n / 16, format);
		putnbr_hex(n % 16, format);
	}
	else
	{
		if (n > 9)
		{
			if (format == 'x')
				ft_putchar_fd((n % 10) + 'a', 1);
			if (format == 'X')
				ft_putchar_fd((n % 10) + 'A', 1);
		}
		else
		{
			ft_putchar_fd(n + '0', 1);
		}
	}
}

int	hex_print(unsigned int n, const char format)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		putnbr_hex(n, format);
	return (hex_len(n));
}
