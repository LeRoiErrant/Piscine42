/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 18:34:46 by vheran            #+#    #+#             */
/*   Updated: 2021/09/10 14:53:58 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_char(char z);

void	ft_gen_num(int x, int y);

void	ft_print_comb2(void)
{
	int	aa;
	int	bb;

	aa = 0;
	while (aa <= 98)
	{
		bb = aa + 1;
		while (bb <= 99)
		{
			ft_gen_num(aa, bb);
			bb++;
		}
		aa++;
	}
}

void	ft_gen_num(int x, int y)
{
	ft_print_char(48 + (x / 10));
	ft_print_char(48 + (x % 10));
	write(1, " ", 1);
	ft_print_char(48 + (y / 10));
	ft_print_char(48 + (y % 10));
	if (x != 98)
	{
		write(1, ", ", 2);
	}	
}

void	ft_print_char(char z)
{
	write(1, &z, 1);
}

/*int	main(void)
{
	ft_print_comb2();
}*/
