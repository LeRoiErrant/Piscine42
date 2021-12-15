/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:00:56 by vheran            #+#    #+#             */
/*   Updated: 2021/09/04 22:58:24 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

void	ft_ft(int *nbr);

/*int	main(void)
{
	int	num;
	int	*nbr;

	num = 3;
	nbr = &num;
	printf("%d\n", num);
	ft_ft(nbr);
	printf("%d\n", num);

	return (0);
}*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
