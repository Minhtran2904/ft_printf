/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ptrprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:24:47 by mitran            #+#    #+#             */
/*   Updated: 2022/11/24 11:24:49 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ptr_len(size_t nb)
{
	int	i;

	i = 0;
	while (nb != 0)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}

void put_ptr(size_t n)
{
	if (n >= 16)
	{
		put_ptr(n / 16);
		put_ptr(n % 16);		
	}
	else
	{
		if (n > 9)
		{
/* 			ft_putchar_fd((n / 10) + 'a', 1); */
			ft_putchar_fd((n % 10) + 'a', 1);
		}
		else
		{
			ft_putchar_fd(n + '0', 1);
		}
	}
}

int ptr_print(long ptr)
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
		put_ptr(ptr);
		len += ptr_len(ptr);
	}
	return (len);
}
