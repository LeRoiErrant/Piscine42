/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_new.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:47:19 by vheran            #+#    #+#             */
/*   Updated: 2021/09/22 18:58:18 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
			if (!(aa == 0 && bb == 1))
				write(1, ", ", 2);
			ft_putchar((aa / 10) + 48);
			ft_putchar((aa % 10) + 48);
			ft_putchar(' ');
			ft_putchar((bb / 10) + 48);
			ft_putchar((bb % 10) + 48);
			bb++;
		}
		aa++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
