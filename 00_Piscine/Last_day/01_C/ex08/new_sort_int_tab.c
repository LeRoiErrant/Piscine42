/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sort_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:56:58 by vheran            #+#    #+#             */
/*   Updated: 2021/09/23 11:20:34 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				c = tab[i];
				tab[i] = tab[j];
				tab[j] = c;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[6];
	int size;
	int i;

	size = 6;
	tab[0] = 4;
	tab[1] = 8;
	tab[2] = 2;
	tab[3] = 42;
	tab[4] = 23;
	tab[5] = 1;
	i = 0;
	printf("Avant sort :\n");
	while (i < size)
		printf("[%d] ", tab[i++]);
	ft_sort_int_tab(tab, size);
	i = 0;
	printf("\nApres sort :\n");
	while (i < size)
		printf("[%d] ", tab[i++]);
	printf("\n");
	return (0);
}
