# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Valentin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/02 18:08:33 by Valentin          #+#    #+#              #
#    Updated: 2019/03/02 18:19:46 by Valentin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

PATH_SRCS = ./srcs/

HEAD = includes

SRCS = $(PATH_SRCS)ft_putchar.c \
		$(PATH_SRCS)ft_putstr.c \
		$(PATH_SRCS)ft_strcmp.c \
		$(PATH_SRCS)ft_strlen.c \
		$(PATH_SRCS)ft_swap.c

OBJ = $(notdir $(SRCS:.c=.o))

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I $(HEAD) -c $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
