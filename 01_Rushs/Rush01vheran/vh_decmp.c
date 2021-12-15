/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vh_decmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:30:46 by vheran            #+#    #+#             */
/*   Updated: 2021/09/12 00:32:56 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	vh_decmp(char *src, int *dest)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (src[i])
	{
		while  (j <= 4)
		{
			if (49 <= src[i] && src[i] <= 52)
				dest[j++] = atoi(&src[i++]);
			i++;
		}
		j = 31;
		while (j <= 34)
		{
			if (49 <= src[i] && src[i] <= 52)
				dest[j++] = src[i++];
			i++;
		}

	}
}
