/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtamarzi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:24:33 by mtamarzi          #+#    #+#             */
/*   Updated: 2021/09/12 23:09:02 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	vh_init_tpar(char *src, int tab[4][4]);

void	mw_init_tdok(int tab[4][4]);

void	vh_print_tab(int tab[4][4]);

int		mt_check_error(int argc, char *src);

int		mt_check_par(int tpar[4][4]);

int		vh_fill_tdok(int tabpr[4][4], int tabdk [4][4]);

int		vh_verify_val(int tdk[4][4], int tpr[4][4], int coord);

int	vh_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	mt_print_error(void)
{
	write(1, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	int	tpar[4][4];
	int	tdok[4][4];

	if (mt_check_error(argc, argv[1]) == 1)
	{
		mt_print_error();
		return (0);
	}
	vh_init_tpar(argv[1], tpar);
	if (mt_check_par(tpar) == 1)
	{
		mt_print_error();
		return (0);
	}
	mw_init_tdok(tdok);
	vh_fill_tdok(tpar, tdok);
	if (!(vh_verify_val(tdok, tpar, 0)))
	{
		mt_print_error();
		return (0);
	}
	vh_print_tab(tdok);
	return (0);
}
