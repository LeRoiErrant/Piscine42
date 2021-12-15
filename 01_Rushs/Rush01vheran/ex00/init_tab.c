/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 00:17:52 by vheran            #+#    #+#             */
/*   Updated: 2021/09/12 19:30:24 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	vh_init_tpar(char *src, int tab[4][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if ((k % 2) == 0)
				tab[i][j++] = src[k] - 48;
			k++;
		}
		i++;
	}
}

void	mw_init_tdok(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
}
