/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_ftrtw.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:47:27 by vheran            #+#    #+#             */
/*   Updated: 2021/09/12 22:44:50 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	vh_put_ftrtw(int tabpr[4][4], int tabdk[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tabpr[0][i] == 3 && tabpr[1][i] == 2)
			tabdk[2][i] = 4;
		if (tabpr[0][i] == 2 && tabpr[1][i] == 3)
			tabdk[1][i] = 4;
		if (tabpr[2][i] == 3 && tabpr[3][i] == 2)
			tabdk[i][2] = 4;
		if (tabpr[2][i] == 2 && tabpr[3][i] == 3)
			tabdk[i][1] = 4;
		i++;
	}
}

void	vh_put_th_otw(int tpr[4][4], int tdk[4][4])
{	
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tpr[0][i] == 1 && tpr[1][i] == 2)
			tdk[3][i] = 3;
		if (tpr[0][i] == 2 && tpr[1][i] == 1)
			tdk[0][i] = 3;
		if (tpr[2][i] == 1 && tpr[3][i] == 2)
			tdk[i][3] = 3;
		if (tpr[2][i] == 2 && tpr[3][i] == 1)
			tdk[i][0] = 3;
		i++;
	}
}
