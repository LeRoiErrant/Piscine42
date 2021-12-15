/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 23:02:07 by vheran            #+#    #+#             */
/*   Updated: 2021/09/21 01:35:04 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Merci d'entrer 3 arguments (nbr, base_from, base_to");
		return (0);
	}
	printf("Convert  = %s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
