/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:50:32 by vheran            #+#    #+#             */
/*   Updated: 2021/09/21 13:22:42 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	if (len <= 0)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(len * sizeof(range));
	if (!(*range))
		return (-1);
	i = 0 ;
	while (min < max)
		(*range)[i++] = min++;
	return (len);
}
