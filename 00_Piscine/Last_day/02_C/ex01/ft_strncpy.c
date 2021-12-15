/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:59:38 by vheran            #+#    #+#             */
/*   Updated: 2021/09/09 16:03:45 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
v
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i++];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	//char			tab1a[25] = "Ahoy !";
	//char			tab2a[15] = "Hello World";
	char			tab1b[25] = "Ahoy !";
	char			tab2b[15] = "Hello World";
	//char			tab3a[15] = "Ahoy !";
	//char			tab4a[25] = "Hello World";
	//char			tab3b[15] = "Ahoy !";
	//char			tab4b[15] = "Hello World";
	unsigned int	l;

	l = 5;
	//printf("Return Lib : %s\n", strncpy(tab2a, tab1a, l));
	printf("return Cust: %s\n", ft_strncpy(tab2b, tab1b, l));
	//printf("Return Lib : %s\n", strncpy(tab4a, tab3a, l));
	//printf("return Cust: %s\n", ft_strncpy(tab4b, tab3b, l));
	return (0);
}
