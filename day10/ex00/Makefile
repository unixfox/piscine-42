# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edevos <edevos@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/24 16:38:59 by edevos            #+#    #+#              #
#    Updated: 2018/07/26 16:23:14 by edevos           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(FOLDER_SRC)/ft_putchar.c $(FOLDER_SRC)/ft_putstr.c $(FOLDER_SRC)/ft_strcmp.c $(FOLDER_SRC)/ft_strlen.c $(FOLDER_SRC)/ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FOLDER_SRC = srcs

FOLDER_HEADERS = includes

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): BUILD_HEADERS BUILD_LIB

BUILD_HEADERS:
	gcc -c $(SRC) $(CFLAGS) -I$(FOLDER_HEADERS)

BUILD_LIB:
	ar rc $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
