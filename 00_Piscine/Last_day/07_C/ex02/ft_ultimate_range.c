/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:50:32 by vheran            #+#    #+#             */
/*   Updated: 2021/09/22 11:58:59 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (max <= min)
	{
		range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(len * sizeof(range));
	if (!(*range))
		return (-1);
	i = 0 ;
	while (min < max)
		(*range)[i++] = min++;
	return (len);
}
/*
#include <stdio.h>

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
}*/
