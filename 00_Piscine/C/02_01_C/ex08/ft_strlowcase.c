/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 23:19:59 by vheran            #+#    #+#             */
/*   Updated: 2021/09/08 20:54:42 by vheran           ###   ########.fr       */
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
	return (str);
}

/*int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	printf("Before lowcase : %s\n", argv[1]);
	printf("After lowcase :%s\n", ft_strlowcase(argv[1]));
	return (0);
}*/

/*int	main(void)
{
	char	str[] ="hELlo w0RLd+the42Crew";

	printf("Before lowcase : %s\n", str);
	printf("After lowcase :%s\n", ft_strlowcase(str));
	return (0);
}*/
