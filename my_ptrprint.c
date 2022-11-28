/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ptrprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:24:47 by mitran            #+#    #+#             */
/*   Updated: 2022/11/28 09:50:59 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_len(size_t n)
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

void	putnbr_ptr(size_t n)
{
	if (n >= 16)
	{
		putnbr_ptr(n / 16);
		putnbr_ptr(n % 16);
	}
	else
	{
		if (n > 9)
		{
			ft_putchar_fd((n % 10) + 'a', 1);
		}
		else
		{
			ft_putchar_fd(n + '0', 1);
		}
	}
}

int	ptr_print(unsigned long long ptr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (!ptr)
	{
		len += write(1, "0", 1);
	}
	else
	{
		putnbr_ptr(ptr);
		len += ptr_len(ptr);
	}
	return (len);
}
