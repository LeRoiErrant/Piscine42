/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_putstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:36:56 by vheran            #+#    #+#             */
/*   Updated: 2021/09/23 10:39:54 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_putstr(argv[1]);
	return (0);
}
