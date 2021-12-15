# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 11:53:10 by vheran            #+#    #+#              #
#    Updated: 2021/09/23 12:00:59 by vheran           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
gcc -Wall -Werror -Wextra -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
rm ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
