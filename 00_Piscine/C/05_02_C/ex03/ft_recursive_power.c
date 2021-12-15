/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:04:29 by vheran            #+#    #+#             */
/*   Updated: 2021/09/15 13:33:04 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	r;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	r = nb;
	if (power > 1)
		r = nb * ft_recursive_power(nb, power - 1);
	return (r);
}
