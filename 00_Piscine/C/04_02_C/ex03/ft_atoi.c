/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:17:51 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 19:43:10 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	c;

	i = 0;
	n = 0;
	c = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			n++;
		i++;
	}	
	while (48 <= str[i] && str[i] <= 57)
	{
		c *= 10;
		c = c + (str[i] - 48);
		i++;
	}
	if ((n % 2) == 1)
		c = -c;
	return (c);
}
