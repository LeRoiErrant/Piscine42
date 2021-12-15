/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:53:35 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 12:24:02 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main(int argc, char **argv)
{
	if (argc !=  3)
	{
		printf("Merci d'entrer 2 arguments (str, base)\n");
		return (0);
	}
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
