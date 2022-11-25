/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_u_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:09:26 by mitran            #+#    #+#             */
/*   Updated: 2022/11/25 15:09:28 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nums_length(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_u_itoa(unsigned int n)
{
	char	*res;
	int		num_len;

	num_len = nums_length(n);
	res = (char *)malloc(sizeof(char) * (num_len + 1));
	if (!res)
		return (0);
	res[num_len] = '\0';
	while (n != 0)
	{
		res[num_len - 1] = (n % 10) + '0';
		num_len--;
		n /= 10;
	}
	return (res);
}

int	my_u_putnbr(unsigned int n)
{
	int		len;
	char	*number;

	len = 0;
	if (n == 0)
		len = write(1, "0", 1);
	else
	{
		number = ft_u_itoa(n);
		len += my_putstr(number);
		free(number);
	}
	return (len);
}
