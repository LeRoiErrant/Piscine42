/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:32:25 by vheran            #+#    #+#             */
/*   Updated: 2021/09/20 12:23:17 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *) malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
