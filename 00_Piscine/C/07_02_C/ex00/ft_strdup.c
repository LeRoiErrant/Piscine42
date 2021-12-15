/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:48:09 by vheran            #+#    #+#             */
/*   Updated: 2021/09/22 14:59:59 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*strd;
	int		i;

	strd = (char *) malloc((ft_strlen(src) + 1) * sizeof(*strd));
	if (strd == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		strd[i] = src[i];
		i++;
	}
	strd[i] = '\0';
	return (strd);
}
