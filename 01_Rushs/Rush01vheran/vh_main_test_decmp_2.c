/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vh_main_test_decmp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:40:37 by vheran            #+#    #+#             */
/*   Updated: 2021/09/11 17:26:22 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	vh_decmp(char *src, char *dest);

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	vh_writerowtb(char a, char b, char c, char d)
{
	write(1, " ", 1);
	ft_putchar(a);
	write(1, " ", 1);
	ft_putchar(b);
	write(1, " ", 1);
	ft_putchar(c);
	write(1, " ", 1);
	ft_putchar(d);
	write(1, " ", 1);
	write(1, "\n ", 1);
}

void	vh_writerowlr(char a, char b)
{
	ft_putchar(a);
	write(1, " ", 1);
	write(1, " ", 1);
	write(1, " ", 1);
	write(1, " ", 1);
	write(1, " ", 1);
	write(1, " ", 1);
	write(1, " ", 1);
	ft_putchar(b);
	write(1, "\n ", 1);
}

int	main(int argc, char ** argv)
{
	(void)	argc;
	char	dest[16];

	vh_decmp(argv[1], dest);
	vh_writerowtb(dest[0], dest[1], dest[2], dest[3]);
	vh_writerowlr(dest[8], dest[12]);
	vh_writerowlr(dest[9], dest[13]);
	vh_writerowlr(dest[10], dest[14]);
	vh_writerowlr(dest[11], dest[15]);
	vh_writerowtb(dest[4], dest[5], dest[6], dest[7]);
	return (0);
}
