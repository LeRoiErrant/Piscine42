# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/19 11:54:46 by vheran            #+#    #+#              #
#    Updated: 2021/09/19 13:35:20 by vheran           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
CC = gcc
CFLAGS = -Werror -Wall -Wextra
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) 



# Variables speciales
# $@ nom cible
# $< nom premiere dependance
# $^ liste dependances
# $? liste dependances plus recente que la cible
# $* nom fichier, sans son extension
