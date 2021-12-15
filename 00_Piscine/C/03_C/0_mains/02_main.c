/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:10:43 by vheran            #+#    #+#             */
/*   Updated: 2021/09/09 15:31:29 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char	stra[10] = "Ahoy";
	char	strb[10] = "Ahoy";
	
	printf("Return L : %s\n", strcat(stra, argv[1]));
	printf("Return C : %s\n", ft_strcat(strb, argv[1]));
	return (0);
}
