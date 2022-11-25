# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mitran <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 10:26:19 by mitran            #+#    #+#              #
#    Updated: 2022/11/23 10:26:21 by mitran           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c my_ptrprint.c my_hexprint.c my_putnbr.c my_u_putnbr.c#REMEMBER TO ADD MORE FT HERE

OBJ = $(SRC:.c=.o)

COMPILE = cc -Wextra -Wall -Werror -c

all: $(NAME)

$(NAME):
		$(COMPILE) ft_printf.h $(SRC)
		make -C ./libft
		cp libft/libft.a $(NAME)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		make -C ./libft clean
		/bin/rm -f $(OBJ)

fclean: clean
		make -C ./libft fclean
		/bin/rm -f $(NAME)

re: fclean all

.PHONY: all libft clean fclean re
