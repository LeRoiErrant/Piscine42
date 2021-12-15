/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlale-de <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 00:59:39 by jlale-de          #+#    #+#             */
/*   Updated: 2021/09/19 20:38:46 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <unistd.h>

unsigned int	getdec(unsigned int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

unsigned int	getmult(unsigned int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

int	ft_print(unsigned int n, struct s_list *tab, int *first)
{
	int				i;
	unsigned int	mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
		ft_print(n / mult, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != mult)
	{
		i++;
	}
	ft_putstr(tab[i].wd);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
	return (1);
}

int	ft_check(unsigned int n, struct s_list *tab)
{
	int				i;
	unsigned int	mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
		if(!ft_check(n / mult, tab))
			return (0);
	while (tab[i].nb != mult)
	{
		i++;
		if (tab[i].nb == '\0')
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	if (mult != 0 && n % mult != 0)
		if(!ft_check(n % mult, tab))
			return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	struct s_list	*tab;
	int				first;

	first = 1;
	if (argc == 2)
	{
		if (!ft_check_error(argv[1]))
			return (0);
		tab = process("numbers.dict");
		if (!ft_check((unsigned int) ft_atoi(argv[1]), tab))
			return (0);
		ft_print((unsigned int) ft_atoi(argv[1]), tab, &first);
	}
	else if (argc == 3)
	{
		if (!ft_check_error(argv[2]))
			return (0);
		tab = process(argv[1]);
		if (!ft_check((unsigned int) ft_atoi(argv[2]), tab))
			return (0);
		ft_print((unsigned int) ft_atoi(argv[2]), tab, &first);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
