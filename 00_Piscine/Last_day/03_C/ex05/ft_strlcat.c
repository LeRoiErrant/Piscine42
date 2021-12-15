/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:53:34 by vheran            #+#    #+#             */
/*   Updated: 2021/09/09 21:41:57 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ls;
	unsigned int	ld;
	unsigned int	lt;

	ls = 0;
	while (src[ls])
		ls++;
	ld = 0;
	while (dest[ld])
		ld++;
	if (size == 0)
		return (ls);
	if (size < ld)
		return (ls + size);
	i = ld;
	j = 0;
	while (src[j] && (ld + j) < (size - 1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	lt = ld + ls;
	return (lt);
}
