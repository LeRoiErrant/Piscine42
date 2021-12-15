/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:59:38 by vheran            #+#    #+#             */
/*   Updated: 2021/09/06 21:53:28 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
/*ATTENTION CLEAN LIBRARIES*/

/*void	ft_putstr(char *str);*/

char	*ft_strncpy(char *dest, char *src, unsigned int a)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (i <= (a - 1))
	{
		if (src[i - n] == '\0')
		{
			dest[i] = 0;
			n++;
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (0);
}

/*void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char			tab1[15] = "Ahoy 42 !";
	char			tab2[15] = "Hello World !";
	unsigned int	length;

	length = 9;
	ft_putstr(tab2);
	write(1, "\n", 1);
	ft_strncpy(tab2,  tab1, length);
	ft_putstr(tab2);
	return (0);
}*/
