/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:40:45 by vheran            #+#    #+#             */
/*   Updated: 2021/09/23 10:43:18 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	(void) argc;
	printf("StrLen : %d\n", ft_strlen(argv[1]));
	return (0);
}
