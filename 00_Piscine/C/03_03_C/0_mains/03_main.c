/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:33:07 by vheran            #+#    #+#             */
/*   Updated: 2021/09/09 17:47:42 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(int argc, char **argv)
{
	(void)			argc;
	(void)			argv;
	char			desta[10] = "Ahoy";
	char			destb[10] = "Ahoy";
	unsigned int	n;

	n = (unsigned int) atoi(argv[2]);
	printf("Return L : %s\n", strncat(desta, argv[1], n));
	printf("Return C : %s\n", ft_strncat(destb, argv[1], n));
	return (0);
}
