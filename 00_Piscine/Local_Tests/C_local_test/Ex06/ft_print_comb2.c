/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:00:25 by vheran            #+#    #+#             */
/*   Updated: 2021/09/02 17:41:12 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	print_number(char te1, char un1, char te2, char un2);

void	ft_print_comb2(void)
{
	char	t1;
	char	u1;
	char	t2;
	char	u2;

	t1 = '0';
	u1 = '0';
	t2 = '0';
	u2 = '0';
	while (t1 < '9' && u1 < '8')
	{
		if (u1 == '9')
		{
			t1 = t1 + 1;
			u1 = '0';
			t2 = t1;
			u2 = '1';
		}
		else 
		{
			if (t2 == '9' && u2 == '9')
			{
				u1 = u1 + 1;
				t2 = t1;
				if (u1 < 9)
				{
					u2 = u1 + 1;
				}
				else
				{
					u2 = '0';	
				}
			}
			else
			{	
				if (u2 == '9')
				{
					t2 = t2 + 1;
					u2 = '0';
				}
				else
				{
					u2 = u2 + 1;
				}
			}
		}
		print_number(t1, u1, t2, u2);	
	}
}

void	print_number(char te1, char un1, char te2, char un2)
{
	write(1, &te1, 1);
	write(1, &un1, 1);
	write(1, " ", 1);
	write(1, &te2, 1);
	write(1, &un2, 1);
	write(1, ", ", 2);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
