/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:58:34 by vheran            #+#    #+#             */
/*   Updated: 2021/09/21 13:22:25 by vheran           ###   ########.fr       */
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

int	ft_strltot(char **strs, int size, char *sep)
{
	int	lent;
	int	i;

	i = 0;
	lent = 0;
	while (i < size)
		lent += ft_strlen(strs[i++]);
	lent += (((size - 1) * ft_strlen(sep)) + 1);
	return (lent);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = (char *)malloc(ft_strltot(strs, size, sep) * sizeof(char));
	if (!str)
		return (NULL);
	*str = 0;
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < (size - 1))
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
