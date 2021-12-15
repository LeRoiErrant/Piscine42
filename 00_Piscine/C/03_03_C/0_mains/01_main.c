/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:21:12 by vheran            #+#    #+#             */
/*   Updated: 2021/09/09 15:10:29 by vheran           ###   ########.fr       */
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

	n = (unsigned int) atoi(argv[3]);
	printf("Return L : %d\n", strncmp(argv[1], argv[2], n));
	printf("Return C : %d\n", ft_strncmp(argv[1], argv[2], n));
	return (0);
}
