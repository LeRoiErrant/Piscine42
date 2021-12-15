/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:44:38 by vheran            #+#    #+#             */
/*   Updated: 2021/09/11 22:54:40 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	vh_strlen(char *str)
{
	int	i;

	i = 0 ;
	while (str[i])
		i++;
	return (i);
}

int	vh_check_error(int argc, char *argv)
{
	if (argc != 2)
		return (1);
	if (vh_strlen(argv) != 31)
		return (1);
	return (0);
}

int	main(int argc, char ** argv)
{
	if (vh_check_error(argc, argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (0);
}
