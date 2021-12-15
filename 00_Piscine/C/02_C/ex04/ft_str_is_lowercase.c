/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 21:24:11 by vheran            #+#    #+#             */
/*   Updated: 2021/09/06 21:35:09 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	result;
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			c++;
		}
		i++;
	}
	if (i == c)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}

/*int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	printf("%d\n", ft_str_is_lowercase(argv[1]));
	return (0);
}*/
