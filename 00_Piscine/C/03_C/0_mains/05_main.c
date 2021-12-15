/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:53:46 by vheran            #+#    #+#             */
/*   Updated: 2021/09/09 22:01:20 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(int argc, char **argv)
{
	(void)			argc;
	(void)			argv;
	unsigned int	s;
	char			des1[15] = "Ahoy";
	char			des2[15] = "Ahoy";

	s = (unsigned int) atoi(argv[2]);
	printf("Return C : %u\n", ft_strlcat(des2, argv[1], s));
	printf("Return StC :%s\n", des2);
	printf("Return L : %lu\n", strlcat(des1, argv[1], s));
	printf("Return StL :%s\n", des1);
	return (0);
}
