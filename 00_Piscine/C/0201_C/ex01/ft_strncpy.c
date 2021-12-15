/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:59:38 by vheran            #+#    #+#             */
/*   Updated: 2021/09/09 01:34:11 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i <= (n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= (n - 1))
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char			tab1a[25] = "xraukbola9cb2fs4qnlbq459";
	/*char			tab2a[15] = "";*/
	char			tab1b[25] = "xraukbola9cb2fs4qnlbq459";
	//char			tab2b[15] = "";
	char			tab3a[15] = "Ahoy !";
	char			tab4a[25] = "\0";
	//char			tab3b[15] = "Ahoy !";
	//char			tab4b[15] = "";
	unsigned int	l;

	l = 24;
	printf("Return Lib : %s\n", strncpy("", tab1a, l));
	printf("return Cust: %s\n", ft_strncpy("", tab1b, l));
	printf("Return Lib : %s\n", strncpy(tab4a, "", l));
	//printf("return Cust: %s\n", ft_strncpy(tab4b, tab3b, l));
	return (0);
}
