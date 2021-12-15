/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_div_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:24:51 by vheran            #+#    #+#             */
/*   Updated: 2021/09/23 10:29:45 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int a;
	int b;
	int div;
	int mod;

	(void) argc;
	div = 0;
	mod = 0;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("Avant div_mod :\n div : %d\n mod : %d\n", div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("Apres div_mod :\n div : %d\n mod : %d\n", div, mod);
	return (0);
}
