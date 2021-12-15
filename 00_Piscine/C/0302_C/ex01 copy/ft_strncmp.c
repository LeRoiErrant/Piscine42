/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:34:09 by vheran            #+#    #+#             */
/*   Updated: 2021/09/10 01:29:44 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	if (s1[0] == s2[0] && s1[0] && s2[0])
		i = 1;
	else
		return ((unsigned char) s1[0] - (unsigned char) s2[0]);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < (n - 1))
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
