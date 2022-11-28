/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:09:33 by mitran            #+#    #+#             */
/*   Updated: 2022/11/02 11:32:46 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static long int	check_overflow(long int sign)
{
	if (sign > 0)
	{
		return (-1);
	}
	else if (sign < 0)
	{
		return (0);
	}
	return (1);
}

static int	check_space(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long int	res;
	int			sign;
	int			i;

	res = 0;
	sign = 1;
	i = check_space(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (res < 0)
	{
		sign = check_overflow(sign);
		return (sign);
	}
	return (sign * (int)res);
}
