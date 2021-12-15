/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 20:55:13 by vheran            #+#    #+#             */
/*   Updated: 2021/09/06 21:55:42 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
		{
			count++;
		}
		i++;
	}
	if (i == count)
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

	printf("%d\n", ft_str_is_numeric(argv[1]));
	return (0);
}*/
