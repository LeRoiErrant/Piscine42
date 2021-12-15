/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 02:33:59 by vheran            #+#    #+#             */
/*   Updated: 2021/09/05 02:53:54 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

int	ft_strlen(char *str);

/*int	main(void)
{
	char	str[20] = "Hello 42 !";
	int		length;

	length = ft_strlen(str);
	printf("%d", length);
	return (0);
}*/

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		str++;
		length++;
	}
	return (length);
}
