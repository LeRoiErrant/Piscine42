/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:18:14 by vheran            #+#    #+#             */
/*   Updated: 2021/09/05 15:12:31 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size);

/*void	ft_put_array(int *str, int size);*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	cache;
	int	j;

	i = 0;
	cache = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				cache = tab[i];
				tab[i] = tab[j];
				tab[j] = cache;
			}
			j++;
		}
		i++;
	}
}
/*int	main(void)
{
	int	size;
	int	str[13] 
	
	str = {23,5,1,7,42,66,144,4,12,28,72,53,13};
	size = 13;
	ft_put_array(str, size);
	printf("\n");
	ft_sort_int_tab(str, size);
	ft_put_array(str, size);
	return (0);
}

void	ft_put_array(int *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", str[i]);
		if (i < size - 1)
		{
			printf(", ");
		}
		i++;
	}
}*/
