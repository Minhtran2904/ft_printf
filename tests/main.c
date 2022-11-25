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
	char	*ptr = "42";
	printf("%s__--==++~~**Testing p**~~++--__\n%s", MAG, GRN);	
	printf("OG printf: %s%p\n", WHT, ptr);
	ft_printf("%sMy printf: %s%p\n", GRN, WHT, ptr);

	//DECIMAL BASE 10 - D//
	int	d = 42;
	printf("%s__--==++~~**Testing d**~~++--__\n%s", MAG, GRN);	
	printf("OG printf: %s%d\n", WHT, d);
	ft_printf("%sMy printf: %s%d\n", GRN, WHT, d);

	//INTEGER - I//
	int	i = 42;
	printf("%s__--==++~~**Testing i**~~++--__\n%s", MAG, GRN);	
	printf("OG printf: %s%i\n", WHT, i);
	ft_printf("%sMy printf: %s%i\n", GRN, WHT, i);

	//UNSIGNED LONG - U//
	unsigned int	u = 4294967295;
	printf("%s__--==++~~**Testing u**~~++--__\n%s", MAG, GRN);	
	printf("OG printf: %s%u\n", WHT, u);
	ft_printf("%sMy printf: %s%u\n", GRN, WHT, u);

	//POINTER - x (lowercase)//
	unsigned int	x;
	
	x = 2144233;
	printf("%s__--==++~~**Testing x**~~++--__\n%s", MAG, GRN);	
	printf("OG printf: %s%x\n", WHT, x);
	ft_printf("%sMy printf: %s%x\n", GRN, WHT, x);

	//POINTER - X (upppercase)//
	printf("%s__--==++~~**Testing X (same int with lower x)**~~++--__\n%s", MAG, GRN);	
	printf("OG printf: %s%X\n", WHT, x);
	ft_printf("%sMy printf: %s%X\n", GRN, WHT, x);

	//PERCENTAGE %//
	printf("%s__--==++~~**Testing %%**~~++--__\n%s", MAG, GRN);	
	printf("OG printf: %s%%\n", WHT);
	ft_printf("%sMy printf: %s%%\n", GRN, WHT);



	//THE END//

	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡾⠋⠉⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠃⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⠀⢀⡏⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀The end⠀⠀⠀    ⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀/ ⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣠⣤⣤⣤⣤⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⠀⡏⠀⠀⠀⠀⢸⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀/ ⠀⠀⣀⡤⠴⠒⠊⠉⠉⠀⠀⣿⣿⣿⠿⠋⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢀⡠⠼⠴⠒⠒⠒⠒⠦⠤⠤⣄⣀⠀⢀⣠⠴⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⣼⠿⠋⠁⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⠀⣇⠔⠂⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢨⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠖⠋⠁⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⢰⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⠤⠒⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⢀⡟⠀⣠⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⢻⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⡤⠤⢴\n", 1);
	ft_putstr_fd("      ⣸⠁⣾⣿⣀⣽⡆⠀⠀⠀⠀⠀⠀⠀⢠⣾⠉⢿⣦⠀⠀⠀⢸⡀⠀⠀⢀⣠⠤⠔⠒⠋⠉⠉⠀⠀⠀⠀⢀⡞\n", 1);
	ft_putstr_fd("⠀⠀   ⢀⡏⠀⠹⠿⠿⠟⠁⠀⠰⠦⠀⠀⠀⠀⠸⣿⣿⣿⡿⠀⠀⠀⢘⡧⠖⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⣼⠦⣄⠀⠀⢠⣀⣀⣴⠟⠶⣄⡀⠀⠀⡀⠀⠉⠁⠀⠀⠀⠀⢸⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠁⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⢰⡇⠀⠈⡇⠀⠀⠸⡾⠁⠀⠀⠀⠉⠉⡏⠀⠀⠀⣠⠖⠉⠓⢤⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⢧⣀⡼⠃⠀⠀⠀⢧⠀⠀⠀⠀⠀⢸⠃⠀⠀⠀⣧⠀⠀⠀⣸⢹⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠃⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠈⢧⡀⠀⠀⠀⠀⠘⣆⠀⠀⠀⢠⠏⠀⠀⠀⠀⠈⠳⠤⠖⠃⡟⠀⠀⠀⢾⠛⠛⠛⠛⠛⠛⠛⠛⠁⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⠙⣆⠀⠀⠀⠀⠈⠦⣀⡴⠋⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⠙⢦⠀⠀⠘⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⢠⡇⠙⠦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠴⠋⠸⡇⠈⢳⡀⠀⢹⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⠀⡼⣀⠀⠀⠈⠙⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠀⠀⠀⣷⠴⠚⠁⠀⣀⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠀⠀⠀⡴⠁⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣆⡴⠚⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⣼⢷⡆⠀⣠⡴⠧⣄⣇⠀⠀⠀⠀⠀⠀⠀⢲⠀⡟⠀⠀⠀⠀⠀⠀⠀⢀⡇⣠⣽⢦⣄⢀⣴⣶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⡿⣼⣽⡞⠁⠀⠀⠀⢹⡀⠀⠀⠀⠀⠀⠀⠈⣷⠃⠀⠀⠀⠀⠀⠀⠀⣼⠉⠁⠀⠀⢠⢟⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⣷⠉⠁⢳⠀⠀⠀⠀⠈⣧⠀⠀⠀⠀⠀⠀⠀⣻⠀⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠀⠏⠀⠀⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠹⡆⠀⠈⡇⠀⠀⠀⠀⠘⣆⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠀⠀⠀⠀⣸⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd(" ⢳⡀⠀⠙⠀⠀⠀⠀⠀⠘⣆⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠀⢀⡄⠀⢠⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("  ⢳⡀⣰⣀⣀⣀⠀⠀⠀⠘⣦⣀⠀⠀⠀⡇⠀⠀⠀⢀⡴⠃⠀⠀⠀⠀⠀⢸⡇⢠⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n", 1);
	ft_putstr_fd("⠀⠀⠀⠉⠉⠀⠀⠈⠉⠉⠉⠙⠻⠿⠾⠾⠻⠓⢦⠦⡶⡶⠿⠛⠛⠓⠒⠒⠚⠛⠛⠁⠀      ⠀       \n", 1);
}
