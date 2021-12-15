/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 23:19:59 by vheran            #+#    #+#             */
/*   Updated: 2021/09/07 09:58:08 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	ft_strlowcase(argv[1]);
	printf("%s\n", argv[1]);
	return (0);
}*/
