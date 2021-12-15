/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:27:22 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 10:03:22 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	vh_strlen(char *str);

int	vh_check_ones(int tab[4][4]);

int	mt_check_error(int argc, char *src)
{
	int	i;

	i = 0;
	if (argc != 2)
		return (1);
	if (vh_strlen(src) != 31)
		return (1);
	while (src[i] != '\0')
	{
		if ((src[i] >= '1' && src[i] <= '4') && (i % 2) == 0)
			i++;
		else if (src[i] == ' ' && (i % 2) == 1)
			i++;
		else
			return (1);
	}
	return (0);
}

int	mt_check_par(int tpar[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 4)
	{
		if ((tpar[0][j] + tpar[1][j]) > 5)
			return (1);
		j++;
	}
	while (i < 4)
	{
		if ((tpar[2][i] + tpar[3][i]) > 5)
			return (1);
		i++;
	}
	if (vh_check_ones(tpar) == 1)
		return (1);
	return (0);
}

int	vh_check_ones(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4 && tab[i][j] != 1)
			j++;
		if (j == 4)
			return (1);
		i++;
	}
	return (0);
}
