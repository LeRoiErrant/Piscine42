/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 23:47:18 by vheran            #+#    #+#             */
/*   Updated: 2021/09/05 02:23:55 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod);

/*int	main(void)
{
	int	dividend;
	int	divider;
	int	quotient;
	int	modulo;
	int	*div;
	int	*mod;

	dividend = 42;
	divider = 5;
	quotient = 0;
	modulo = 0;
	div = &quotient;
	mod = &modulo;
	printf("%d\n", quotient);
	printf("%d\n\n", modulo);
	ft_div_mod(dividend, divider, div, mod);
	printf("%d\n", quotient);
	printf("%d", modulo);
	return (0);
}*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
