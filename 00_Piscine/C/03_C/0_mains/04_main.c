/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:26:22 by vheran            #+#    #+#             */
/*   Updated: 2021/09/09 18:43:33 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	printf("Return L : %s\n", strstr(argv[1], argv[2]));
	printf("Return C : %s\n", ft_strstr(argv[1], argv[2]));
	return (0);
}
