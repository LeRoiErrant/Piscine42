/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:00:09 by vheran            #+#    #+#             */
/*   Updated: 2021/09/09 14:02:56 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	printf("Return strcmp : %d\n", strcmp(argv[1], argv[2]));
	printf("Return ft_strcmp : %d\n", ft_strcmp(argv[1], argv[2]));
	return (0);
}
