# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Valentin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/02 18:08:33 by Valentin          #+#    #+#              #
#    Updated: 2019/03/02 21:17:20 by Valentin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

FLAGS = -Wall -Wextra -Werror

PATH_SRCS = ./srcs/

HEAD = includes

SRCS = $(PATH_SRCS)ft_display.c \
		$(PATH_SRCS)ft_putnstr.c \
		$(PATH_SRCS)ft_putchar.c


all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I $(HEAD) $(SRCS) -o $(NAME)

clean:
	@echo "clean"

fclean: clean
	rm -f $(NAME)

re: fclean all
