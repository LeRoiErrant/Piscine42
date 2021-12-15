/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 01:12:59 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 21:59:04 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace_r_sign(char c, int *n)
{
	if ((9 <= c && c <= 13) || c == ' ')
		return (1);
	if (c == 43 || c == 45)
	{
		if (c == 45)
			*n = *n + 1;
		return (1);
	}
	return (0);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_error_b(char *base, int t_base)
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
			if (base [i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

unsigned int	ft_fcharstr(char *str, char c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (i + 1);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	t_base;
	int				i;
	int				n;
	int				c;

	t_base = ft_strlen(base);
	if (!(ft_check_error_b(base, t_base)))
	{
		i = 0;
		n = 0;
		c = 0;
		while (ft_isspace_r_sign(str[i], &n))
			i++;
		while (ft_fcharstr(base, str[i]) < (t_base + 1))
		{
			c *= t_base;
			c = c + (ft_fcharstr(base, str[i]));
			i++;
		}
		if ((n % 2) == 1)
			c = (signed) c * -1;
		return (c);
	}
	return (0);
}
