/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:54:42 by mitran            #+#    #+#             */
/*   Updated: 2022/11/24 13:54:43 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

#define MAG	"\x1B[35m"
#define WHT	"\x1B[37m"
#define GRN	"\x1b[32m"

int main(void)
{
	// CHARACTER - S//
	char	s = 'a';
	printf("%s__--==++~~**Testing c**~~++--__\n%s", MAG, GRN);	
	printf("OG printf: %s%c\n", WHT, s);
	ft_printf("%sMy printf: %s%c\n", GRN, WHT, s);

	//STRING - S//
	char	str[] = "Hello world!";
	printf("%s__--==++~~**Testing s**~~++--__\n%s", MAG, GRN);	
	printf("OG printf: %s%s\n", WHT, str);
	ft_printf("%sMy printf: %s%s\n", GRN, WHT, str);

	//POINTER - P//
	char	*ptr = "aoisurhgiuthguhgkjdtgj";
	printf("%s__--==++~~**Testing p**~~++--__\n%s", MAG, GRN);	
	printf("OG printf: %s%p\n", WHT, ptr);
	ft_printf("%sMy printf: %s%p\n", GRN, WHT, ptr);
}
