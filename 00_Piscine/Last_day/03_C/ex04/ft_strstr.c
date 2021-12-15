/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:25:18 by vheran            #+#    #+#             */
/*   Updated: 2021/09/09 21:47:57 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char	*str, char *to_find)
{
	int	i;
	int	j;

	if (!to_find)
		return (str);
	i = 0;
	j = 0;
	while (str[i] && to_find[j])
	{
		if (str[i + j] == to_find[j])
			j++;
		else if (j > 0)
		{
			i += j;
			j = 0;
		}
		else
			i++;
	}
	if (to_find[j] == '\0')
		return (&str[i]);
	else
		return (NULL);
}
