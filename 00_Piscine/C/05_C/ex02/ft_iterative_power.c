/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:41:26 by vheran            #+#    #+#             */
/*   Updated: 2021/09/15 13:35:42 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	r = nb;
	while (power > 1)
	{
		r = nb * r;
		power--;
	}
	return (r);
}
