/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:04:50 by vheran            #+#    #+#             */
/*   Updated: 2021/09/20 23:02:02 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char **argv)
{
	int	arg;
	int	*range;
	int	len;
	int	i;

	arg = 2;
	if (argc != (arg + 1))
	{
		printf("Merci d'entrer %d arguments", arg);
		return (0);
	}
	len = ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
	printf("Range = %d\n", len);
	i = 0;
	while (i < len)
	{
		if (i == 0)
			printf("%d", range[i++]);
		else
			printf(" %d", range[i++]);
	}	
	printf("\n");
	return (0);
}

