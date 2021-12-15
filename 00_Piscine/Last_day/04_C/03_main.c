/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:07:27 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 13:16:10 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Merci d'entrer 1 argument (str)\n");
		return (0);
	}
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
