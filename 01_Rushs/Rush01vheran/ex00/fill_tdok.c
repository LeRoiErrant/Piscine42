/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tdok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:06:47 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 10:17:07 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	vh_put_ftrtw(int tabpr[4][4], int tabdk[4][4]);

void	vh_put_th_otw(int tpr[4][4], int tdk[4][4]);

void	vh_check_row_four(int tabpr[4][4], int tabdk[4][4])
{
	int	k;
	int	l;
	int	j;

	j = 0;
	while (j < 4)
	{
		k = 1;
		l = 0;
		if (tabpr[0][j] == 4 && k < 5)
			tabdk[l++][j] = k++;
		j++;
	}
	j = 0;
	while (j < 4)
	{
		k = 1;
		l = 3;
		if (tabpr[1][j] == 4)
			tabdk[l--][j] = k++;
		j++;
	}
}

void	vh_check_col_four(int tabpr[4][4], int tabdk[4][4])
{
	int	k;
	int	l;
	int	j;

	j = 0;
	while (j < 4)
	{
		k = 1;
		l = 0;
		while (tabpr[2][j] == 4 && k < 5)
			tabdk[j][l++] = k++;
		j++;
	}
	j = 0;
	while (j < 4)
	{
		k = 1;
		l = 3;
		while (tabpr[3][j] == 4 && k < 5)
			tabdk[j][l--] = k++;
		j++;
	}
}

void	vh_check_row_one(int tabpr[4][4], int tabdk[4][4])
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (tabpr[0][j] == 1)
			tabdk[0][j] = 4;
		j++;
	}
	j = 0;
	while (j < 4)
	{
		if (tabpr[1][j] == 1)
			tabdk[3][j] = 4;
		j++;
	}
}

void	vh_check_col_one(int tabpr[4][4], int tabdk[4][4])
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (tabpr[2][j] == 1)
			tabdk[j][0] = 4;
		j++;
	}
	j = 0;
	while (j < 4)
	{
		if (tabpr[3][j] == 1)
			tabdk[j][3] = 4;
		j++;
	}
}

void	vh_fill_tdok(int tpar[4][4], int tdok[4][4])
{
	vh_check_col_four(tpar, tdok);
	vh_check_row_four(tpar, tdok);
	vh_check_col_one(tpar, tdok);
	vh_check_row_one(tpar, tdok);
	vh_put_ftrtw(tpar, tdok);
	vh_put_th_otw(tpar, tdok);
}
