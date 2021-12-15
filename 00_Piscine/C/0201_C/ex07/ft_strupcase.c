/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 22:36:14 by vheran            #+#    #+#             */
/*   Updated: 2021/09/08 20:56:14 by vheran           ###   ########.fr       */
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
	return (str);
}

/*int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	printf("Before upcase : %s\n", argv[1]);
	printf("After upcase :%s\n", ft_strupcase(argv[1]));
	return (0);
}*/

/*int	main(void)
{
	char	str[] ="hELlo w0RLd+the42Crew";

	printf("Before upcase : %s\n", str);
	printf("After upcase :%s\n", ft_strupcase(str));
	return (0);
}*/
