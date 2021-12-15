/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 02:00:52 by vheran            #+#    #+#             */
/*   Updated: 2021/09/10 15:07:37 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	str[6] = "Hello";	
	
	ft_putstr(str);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}
