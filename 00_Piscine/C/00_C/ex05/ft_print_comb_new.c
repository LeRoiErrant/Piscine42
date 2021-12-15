/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:28:33 by vheran            #+#    #+#             */
/*   Updated: 2021/09/22 18:44:04 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	h;
	char	t;
	char	u;

	h = '0';
	while (h <= '7')
	{
		t = h + 1;
		while (t <= '8')
		{
			u = t + 1;
			while (u <= '9')
			{
				if (!(h == '0' && t == '1' && u == '2'))
					write(1, ", ", 2);
				write(1, &h, 1);
				write(1, &t, 1);
				write(1, &u, 1);
				u++;
			}
			t++;
		}
		h++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
