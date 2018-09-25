# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amedvede <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/24 11:10:07 by amedvede          #+#    #+#              #
#    Updated: 2018/09/24 12:47:39 by amedvede         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = b_ls
FILES = ./src/*.c ./utils/*.c
INCLUDES = -I includes
COMPILE = gcc -Wall -Werror -Wextra
O = -o
CLEAN = /bin/rm -f

$(NAME) : all

all:
	$(COMPILE) $(FILES) $(INCLUDES) main.c $(O) $(NAME)

clean:
	$(CLEAN) $(NAME)

re: clean all
