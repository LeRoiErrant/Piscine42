/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 01:10:02 by vheran            #+#    #+#             */
/*   Updated: 2021/09/05 02:31:55 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b);

/*int	main(void)
{
	int	dividend;
	int divider;
	int *quotient;
	int *modulo;

	dividend = 42;
	divider = 5;
	quotient = &dividend;
	modulo = &divider;
	printf("%d\n", dividend);
	printf("%d\n", divider);
	ft_ultimate_div_mod(quotient, modulo);
	printf("%d\n", dividend);
	printf("%d\n", divider);
	return (0);
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	cache;

	if (*b != 0)
	{
		cache = *a / *b;
		*b = *a % *b;
		*a = cache;
	}
}
