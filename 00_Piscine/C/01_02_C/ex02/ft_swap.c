/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 23:06:03 by vheran            #+#    #+#             */
/*   Updated: 2021/09/04 23:50:32 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b);

/*int	main(void)
{
	int	val1;
	int	*ptr1;
	int	val2;
	int	*ptr2;

	val1 = 3;
	ptr1 = &val1;
	val2 = 42;
	ptr2 = &val2;
	printf("%d\n", val1);
	printf("%d\n\n", val2);
	ft_swap(ptr1, ptr2);
	printf("%d\n", val1);
	printf("%d", val2);
	return (0);
}*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}
