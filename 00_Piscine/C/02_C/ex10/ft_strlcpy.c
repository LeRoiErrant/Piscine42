/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:58:23 by vheran            #+#    #+#             */
/*   Updated: 2021/09/08 11:59:51 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;

	l = ft_strlen(src);
	i = 0;
	if (l < size)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = src[i];
	}
	else if (l >= size)
	{
		while (i <= (size - 2))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	(void)			argc;
	(void)			argv;
	unsigned int	size;

	size = atoi(argv[3]);
	printf("%s\n", argv[1]);
	ft_strlcpy(argv[1], argv[2], size);
	printf("%s\n", argv[1]);
	return (0);
}*/

/*int	main(void)
{
	char	dest[5] = "Ahoy";
	char	src[12] = "Hello World";
	unsigned int s;

	s = 5;
	ft_strlcpy(dest, src, s);
	printf("%s\n", dest);
	return (0);
}*/

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str != '\0')
	{
		str++;
		l++;
	}
	return (l);
}
