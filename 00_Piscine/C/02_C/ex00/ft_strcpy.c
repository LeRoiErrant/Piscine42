/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:51:07 by vheran            #+#    #+#             */
/*   Updated: 2021/09/08 12:52:14 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (0);
}

/*int	main(void)
{
	char	tab1[10] = "Ahoy 42 !";
	char	tab2[14] = "Hello World !";
	char	tab3[10] = "Ahoy 42 !";
	char	tab4[14] = "Hello World !";

	strcpy(tab2, tab1);
	ft_strcpy(tab4, tab3);
	printf("Print : %s\n", tab2);
	printf("Custom : %s\n", tab4);
	return (0);
}*/
