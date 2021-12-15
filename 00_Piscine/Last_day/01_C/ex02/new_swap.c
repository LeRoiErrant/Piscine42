/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:14:06 by vheran            #+#    #+#             */
/*   Updated: 2021/09/23 10:21:18 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = 0;
	c  = *a;
	*a = *b;
	*b = c;
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int a;
	int b;

	(void) argc;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("a avant swap : %d\n", a);
	printf("b avant swap : %d\n", b);
	ft_swap(&a, &b);
	printf("a apres swap : %d\n", a);
	printf("b apres swap : %d\n", b);
	return (0);
}
