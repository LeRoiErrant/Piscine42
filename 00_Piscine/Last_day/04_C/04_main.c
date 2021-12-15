/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:12:33 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 13:18:40 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base(int nbdr, char *base);

int	main(int argc, char **argv)
{
	int	n;

	if ( argc != 3)
	{
		printf("Merci d'entrer 2 arguments (nbr, base)\n");
		return (0);
	}
	n = atoi(argv[1]);
	ft_putnbr_base(n, argv[2]);
	return (0);
}
