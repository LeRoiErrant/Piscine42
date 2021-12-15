/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:50:15 by vheran            #+#    #+#             */
/*   Updated: 2021/09/10 14:40:22 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	abc;

	abc = 97;
	while (abc < 123)
	{
		write(1, &abc, 1);
		abc++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
