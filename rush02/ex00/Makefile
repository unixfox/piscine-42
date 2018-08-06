# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edevos <edevos@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 14:20:15 by edevos            #+#    #+#              #
#    Updated: 2018/07/22 15:19:38 by edevos           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

RUSH00 = rush00/{ft_putchar.c,ft_atoi.c,main.c,rush00.c}
RUSH01 = rush00/{ft_putchar.c,ft_atoi.c,main.c,rush01.c}
RUSH02 = rush00/{ft_putchar.c,ft_atoi.c,main.c,rush02.c}
RUSH03 = rush00/{ft_putchar.c,ft_atoi.c,main.c,rush03.c}
RUSH04 = rush00/{ft_putchar.c,ft_atoi.c,main.c,rush04.c}
CFLAGS = -Wall -Wextra -Werror
EXTRA = ft_concat.c ft_putnbr.c ft_strcmp.c how_many.c
RUSH = $(EXTRA) rush00.c rush01.c rush02.c rush03.c rush04.c

SRC = $(RUSH) error.c main.c print_answer.c printxx.c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRC)
	gcc $(CFLAGS) -o colle-00 $(RUSH00)
	gcc $(CFLAGS) -o colle-01 $(RUSH01)
	gcc $(CFLAGS) -o colle-02 $(RUSH02)
	gcc $(CFLAGS) -o colle-03 $(RUSH03)
	gcc $(CFLAGS) -o colle-04 $(RUSH04)
	gcc -c $(CFLAGS) main.c

clean:
	/bin/rm -f main.o

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f colle-00
	/bin/rm -f colle-01
	/bin/rm -f colle-02
	/bin/rm -f colle-03
	/bin/rm -f colle-04

norm:
	norminette *.c *.h */*.c

re: fclean all
