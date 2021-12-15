/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:24:57 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 22:26:59 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int	r;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	r = nb;
	nb--;
	while (nb > 1)
	{
		r = r * nb;
		nb--;
	}
	return (r);
}
