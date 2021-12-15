/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 03:00:19 by vheran            #+#    #+#             */
/*   Updated: 2021/09/05 13:03:25 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size);

void	ft_putarray(int *str, int size);

/*int	main(void)
{
	int size;
	int	str[5] = {1,2,3,4,5};

	size = 5;
	ft_putarray(str, size);
	printf("\n");
	ft_rev_int_tab(str, size);
	ft_putarray(str, size);
	return (0);
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	cache;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		cache = tab[i];
		tab[i] = tab[size - (1 + i)];
		tab[size - (1 + i)] = cache;
		i++;
	}
}

/*void	ft_putarray(int *str,int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", str[i]);
		i++;
	}

}*/
