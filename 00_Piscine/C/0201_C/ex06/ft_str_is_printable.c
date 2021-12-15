/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 22:03:51 by vheran            #+#    #+#             */
/*   Updated: 2021/09/06 22:37:04 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	r;
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (32 <= str[i] && str[i] <= 127)
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

	printf("%d\n", ft_str_is_printable(argv[1]));
	return (0);
}*/
