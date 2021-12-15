/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:34:46 by vheran            #+#    #+#             */
/*   Updated: 2021/09/04 22:58:45 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

void	ft_ultimate_ft(int *********nbr);

/*int	main(void)
{
	int	num;
	int	*nbr9;
	int	**nbr8;
	int	***nbr7;
	int	****nbr6;
	int	*****nbr5;
	int	******nbr4;
	int	*******nbr3;
	int	********nbr2;
	int	*********nbr;

	num = 3;
	nbr9 = &num;
	nbr8 = &nbr9;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr = &nbr2;
	printf("%d\n", num);
	ft_ultimate_ft(nbr);
	printf("%d\n", num);
	return (0);
}*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
