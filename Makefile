# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwen <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/05 18:58:52 by zwen              #+#    #+#              #
#    Updated: 2018/05/06 08:57:24 by zwen             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

SRC = *.c

O-FILES = *.o

HEADER = libft/includes

FLAG = -Wall -Wextra -Werror

lib:
	make -C libft/ fclean && make -C libft/

all: $(NAME)

$(NAME): lib
	gcc -g $(FLAG) -I $(HEADER) -o $(NAME).o -c $(NAME).c
	gcc -g $(FLAG) -I $(HEADER) -o main.o -c main.c
	gcc -g -o $(NAME) main.o $(NAME).o -I $(HEADER) -L libft/ -lft

clean:
	make -C libft/ clean
	/bin/rm -f $(O-FILES)

fclean: clean
	make -C libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all
