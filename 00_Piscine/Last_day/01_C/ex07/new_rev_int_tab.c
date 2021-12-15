/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_rev_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:44:06 by vheran            #+#    #+#             */
/*   Updated: 2021/09/23 10:56:12 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < (size / 2))
	{
		c = tab[i];
		tab[i] = tab[size - (1 + i)];
		tab[size - (1 + i++)] = c;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[6];
	int size = 6;
	int i;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 6;
	i = 0;
	printf("Avant rev :\n");
	while (i < size)
		printf("%d ", tab[i++]);
	i = 0;
	ft_rev_int_tab(tab, size);
	printf("\nApres rev :\n");
	while (i < size)
		printf("%d ", tab[i++]);
	printf("\n");
	return (0);
}
