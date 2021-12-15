/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 21:16:51 by vheran            #+#    #+#             */
/*   Updated: 2021/09/04 21:39:20 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	ft_write_row(int column, char left, char middle, char right);

void	rush(int x, int y)
{
	int	row;

	row = y;
	if (x > 0 && y > 0)
	{
		ft_write_row(x, '/', '*', '\\');
		if (y > 1)
		{
			ft_putchar('\n');
			while ((row - 2) > 0)
			{
				ft_write_row(x, '*', ' ', '*');
				ft_putchar('\n');
				row--;
			}
			ft_write_row(x, '\\', '*', '/');
		}
	}
	else
	{
		ft_putchar('\n');
	}
}

void	ft_write_row(int column, char left, char middle, char right)
{
	int	col;

	col = column;
	ft_putchar(left);
	if (col > 1)
	{
		while ((col - 2) > 0)
		{
			ft_putchar(middle);
			col--;
		}
		ft_putchar(right);
	}
}
