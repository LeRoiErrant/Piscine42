/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:40:46 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 22:01:54 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_error_b(int t_base, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (t_base == 0 || t_base == 1)
		return (1);
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	t_base;
	unsigned int	n;

	t_base = ft_strlen(base);
	if (ft_check_error_b(t_base, base) == 0)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			n = -nbr;
		}
		else
			n = nbr;
		if (n >= t_base)
		{
			ft_putnbr_base(n / t_base, base);
			ft_putchar(base[n % t_base]);
		}
		if (n < t_base)
			ft_putchar(base[n]);
	}
}
