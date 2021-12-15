/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:33:33 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 12:22:18 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(int argc,char **argv)
{
	if ( argc != 2)
	{
		printf("Merci d'entrer 1 argument (str)\n");
		return (0);
	}
	printf("Return C : %d\n", ft_strlen(argv[1]));
	printf("Return L : %lu\n", strlen(argv[1]));
	return (0);
}	
