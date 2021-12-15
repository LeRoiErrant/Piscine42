/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_ultimate_div_mod.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:30:53 by vheran            #+#    #+#             */
/*   Updated: 2021/09/23 10:35:39 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	(void) argc;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("Avant UltimateDivMod :\n a : %d\n b : %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Apres UltimateDivMod :\n a : %d\n b : %d\n", a, b);
	return (0);	
}	
