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

SRC = ft_printf.c #REMEMBER TO ADD MORE FT HERE

FLAGS = -Wextra -Wall -Werror

INCLUDE = libft

all: $(NAME)

$(NAME):
		$(SRC:.c=.o) libft
		cc -c -I $(INCLUDE) $(FLAGS) $(SRC)
		ar rc $(NAME) $(SRC:.c=.o)

libft:
		make -c libft
		cp libft/libft.a $(NAME)
		ranlib $(NAME)

clean:
		make -c libft clean
		/bin/rm -f $(SRC:.c=.o)

fclean: clean
		make -c libft fclean
		/bin/rm -f $(NAME)

re: fclean all

.PHONY: all libft clean fclean re
