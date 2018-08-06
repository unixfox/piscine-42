# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edevos <edevos@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/24 16:38:59 by edevos            #+#    #+#              #
#    Updated: 2018/07/26 11:01:17 by edevos           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = $(FOLDER_SRC)/check_before_calc.c $(FOLDER_SRC)/main.c $(FOLDER_SRC)/ft_putstr.c $(FOLDER_SRC)/ft_putchar.c $(FOLDER_SRC)/calc.c $(FOLDER_SRC)/ft_atoi.c $(FOLDER_SRC)/ft_putnbr.c $(FOLDER_SRC)/ft_strlen.c

FOLDER_SRC = srcs

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRC)

clean:
	/bin/rm -f $(NAME)

re: clean all