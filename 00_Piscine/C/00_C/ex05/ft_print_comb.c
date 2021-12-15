/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:48:26 by vheran            #+#    #+#             */
/*   Updated: 2021/09/10 14:52:42 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	write_number(char h, char t, char u);

void	increment_hundred(char *hu, char *te, char *un);

void	increment_ten(char *ten, char *uni);

void	ft_print_comb(void)
{
	char	h;
	char	t;
	char	u;

	h = '0';
	t = '0';
	u = '0';
	while (h <= '6')
	{
		if (t == '8')
			increment_hundred(&h, &t, &u);
		else if (u == '9' || u == '0')
			increment_ten(&t, &u);
		else
			u++;
		write_number(h, t, u);
	}
}

void	increment_hundred(char *hu, char *te, char *un)
{
	*hu = *hu + 1;
	*te = *hu + 1;
	*un = *te + 1;
}

void	increment_ten(char *ten, char *uni)
{
	*ten = *ten + 1;
	*uni = *ten + 1;
}

void	write_number(char h, char t, char u)
{
	write(1, &h, 1);
	write(1, &t, 1);
	write(1, &u, 1);
	if (h <= '6')
	{
		write(1, ", ", 2);
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
