/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:01:42 by mitran            #+#    #+#             */
/*   Updated: 2022/11/24 10:01:47 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include "libft/libft.h"

int	ft_printf(const char *s, ...);
int	ptr_len(size_t nb);
void put_ptr(size_t n);
int ptr_print(long ptr);
