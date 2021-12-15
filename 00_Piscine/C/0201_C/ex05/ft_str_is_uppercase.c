/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 21:36:39 by vheran            #+#    #+#             */
/*   Updated: 2021/09/06 21:56:20 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	r;
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			c++;
		}
		i++;
	}
	if (i == c)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}

/*int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	printf("%d\n", ft_str_is_uppercase(argv[1]));
	return (0);
}*/
