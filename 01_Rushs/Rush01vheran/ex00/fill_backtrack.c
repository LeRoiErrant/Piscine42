/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_backtrack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:53:35 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 10:38:36 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	vh_check_row(int k, int tdk[4][4], int i)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (tdk[i][j] == k)
			return (0);
		j++;
	}
	return (1);
}

int	vh_check_col(int k, int tdk[4][4], int j)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tdk[i][j] == k)
			return (0);
		i++;
	}
	return (1);
}

int	vh_verify_val(int tdk[4][4], int tpr[4][4], int coord)
{
	int	i;
	int	j;
	int	k;

	if (coord == (4 * 4))
		return (1);
	i = coord / 4;
	j = coord % 4;
	if (tdk[i][j] != 0)
		return (vh_verify_val(tdk, tpr, (coord + 1)));
	k = 1;
	while (k <= 4)
	{
		if (vh_check_row(k, tdk, i) && vh_check_col(k, tdk, j))
		{
			tdk[i][j] = k;
			if (vh_verify_val(tdk, tpr, (coord + 1)))
				return (1);
		}
		k++;
	}
	tdk[i][j] = 0;
	return (0);
}
