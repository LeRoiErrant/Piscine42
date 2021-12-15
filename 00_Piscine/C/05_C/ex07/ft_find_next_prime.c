/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:20:19 by vheran            #+#    #+#             */
/*   Updated: 2021/09/16 13:44:13 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = nb;
	while (!ft_is_prime(prime))
		prime++;
	return (prime);
}

#include <stdio.h>
int    main(void)
{
  int n;

  n = 1;
  printf("%d : %d\n", n, ft_find_next_prime(n));
  n = 4;
  printf("%d : %d\n", n, ft_find_next_prime(n));
  n = 3;
  printf("%d : %d\n", n, ft_find_next_prime(n));
  n = 16;
  printf("%d : %d\n", n, ft_find_next_prime(n));
  n = 17;
  printf("%d : %d\n", n, ft_find_next_prime(n));
  n = -1;
  printf("%d : %d\n", n, ft_find_next_prime(n));
  n = 2147395600;
  printf("%d : %d\n", n, ft_find_next_prime(n));
  n = -9;
  printf("%d : %d\n", n, ft_find_next_prime(n));
  n = 23;
  printf("%d : %d\n", n, ft_find_next_prime(n));
  n = 22901;
  printf("%d : %d\n", n, ft_find_next_prime(n));
  return (0);
}
