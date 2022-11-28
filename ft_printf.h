/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:01:42 by mitran            #+#    #+#             */
/*   Updated: 2022/11/28 09:51:55 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char *s, ...);

int		ptr_len(size_t n);
void	putnbr_ptr(size_t n);
int		ptr_print(unsigned long long ptr);

int		hex_len(unsigned int n);
void	putnbr_hex(unsigned int n, const char format);
int		hex_print(unsigned int n, const char format);

int		my_putstr(char *s);
int		my_putnbr(int n);

int		nums_length(unsigned int n);
char	*ft_u_itoa(unsigned int n);
int		my_u_putnbr(unsigned int n);

#endif
