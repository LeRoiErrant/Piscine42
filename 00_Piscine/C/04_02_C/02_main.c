/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:17:18 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 13:14:47 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	int		nb;

	if (argc != 2)
	{
		printf("Merci d'entrer 1 argument (nb)\n");
		return (0);
	}
	nb = atoi(argv[1]);
	ft_putnbr(nb);
	write(1, "\n", 1);
	return (0);
}
