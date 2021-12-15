/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 22:36:14 by vheran            #+#    #+#             */
/*   Updated: 2021/09/07 16:41:51 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}	
	return (0);
}

/*int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	printf("%s\n", argv[1]);
	ft_strupcase(argv[1]);
	printf("%s\n", argv[1]);
}*/
