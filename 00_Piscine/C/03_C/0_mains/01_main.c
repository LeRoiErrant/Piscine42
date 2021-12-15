/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:21:12 by vheran            #+#    #+#             */
/*   Updated: 2021/09/13 17:24:30 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	(void)			argc;
	(void)			argv;
	unsigned int	n;
	char			str[] = "\0";
	char			str2[] = "\200";

	n = (unsigned int) atoi(argv[1]);
	printf("Return L : %d\n", strncmp(str, str2, n));
	printf("Return C : %d\n", ft_strncmp(str, str2, n));
	return (0);
}
