/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:38:18 by vheran            #+#    #+#             */
/*   Updated: 2021/09/21 13:33:45 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_valid(char *base, char c);

int	ft_nbrlen(char *base, int nb);

int	ft_fulfill(int nb, char *base, char *new, int index);

int	ft_check_error_bitoa(char *base);

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

int	ft_isspace(char c)
{
	if (c == ' ' || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	ft_check_error_batoi(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_isspace(base[i]))
			return (1);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	t_base;
	int	i;
	int	neg;
	int	c;

	t_base = ft_strlen(base);
	i = 0;
	while (ft_isspace(nbr[i]))
		i++;
	neg = 1;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			neg *= -1;
		i++;
	}
	c = 0;
	while (ft_valid(base, nbr[i]) < t_base)
		c = (c * t_base) + ft_valid(base, nbr[i++]);
	return (c * neg);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		nb_len;
	int		neg;
	char	*new;
	int		last_index;

	if (ft_check_error_batoi(base_from) || ft_check_error_bitoa(base_to))
		return (0);
	neg = 0;
	nb = ft_atoi_base(nbr, base_from);
	if (nb < 0)
		neg++;
	nb_len = ft_nbrlen(base_to, nb);
	new = malloc((nb_len + 1 + neg) * sizeof(char));
	last_index = ft_fulfill(nb, base_to, new, (nb_len - 1 + neg));
	new[last_index + 1] = '\0';
	return (new);
}
