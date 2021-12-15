/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vh_main_test_decmp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:40:37 by vheran            #+#    #+#             */
/*   Updated: 2021/09/11 20:31:05 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	vh_decmp(char *src, int *dest);

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	vh_writetab(int *tab1, int *tab2)
{
	while (tab1 != tab2)
	{
		printf("%d", *tab1);
		write(1, " ", 1);
		tab1++;
	}
	write(1, "\n ", 1);
}

int	main(int argc, char ** argv)
{
	(void)	argc;
	int		dest[6][6] = {{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}};

	vh_decmp(argv[1], &dest[0][0]);
	vh_writetab(&dest[0][1], &dest[0][4]);
	return (0);
}
