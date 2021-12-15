/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:38:28 by vheran            #+#    #+#             */
/*   Updated: 2021/09/21 13:21:08 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_valid(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int	ft_nbrlen(char *base, int nb)
{
	unsigned int	base_len;
	int				len;
	unsigned int	nbr;

	base_len = ft_strlen(base);
	len = 0;
	if (nb < 0)
		nbr = -nb;
	else
		nbr = nb;
	while (nbr >= base_len)
	{
		++len;
		nbr /= base_len;
	}
	return (++len);
}

int	ft_fulfill(int nb, char *base, char *new, int index)
{
	unsigned int	base_len;
	unsigned int	n;

	base_len = ft_strlen(base);
	if (nb < 0)
	{
		new[0] = '-';
		n = -nb;
	}
	else
		n = nb;
	if (n >= base_len)
		ft_fulfill(n / base_len, base, new, index - 1);
	new[index] = base[n % base_len];
	return (index);
}

int	ft_check_error_bitoa(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
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
