/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:51:07 by vheran            #+#    #+#             */
/*   Updated: 2021/09/08 22:45:34 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
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
	return (dest);
}

/*int	main(void)
{
	char	tab1[10] = "Ahoy 42 !";
	char	tab2[14] = "Hello World !";
	char	tab3[10] = "Ahoy 42 !";
	char	tab4[14] = "Hello World !";

	printf("Return Lib : %s\n", strcpy(tab2, tab1));
	printf("Return Cus : %s\n", ft_strcpy(tab4, tab3));
	return (0);
}*/
