/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:00:21 by vheran            #+#    #+#             */
/*   Updated: 2021/09/19 21:41:51 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"
#include <limits.h>

int	ft_check_error(char *str)
{
	if (!ft_str_is_numeric(str))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_strlen(str) > 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (ft_strlen(str) == 10 && !ft_check_max(str))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	ft_check_max(char *str)
{
	if (str[0] > '4')
		return (0);
	else if (str[0] == '4' && str[1] > '2')
		return (0);
	else if (str[0] == '4' && str[1] == '2' && str[2] == '9' && str[3] > '4')
		return (0);
	else if (str[0] == '4' && str[1] == '2' && str[2] == '9' && str[3] == '4'
		&& str[4] == '9' && str[5] > '6')
		return (0);
	else if (str[0] == '4' && str[1] == '2' && str[2] == '9' && str[3] == '4'
		&& str[4] == '9' && str[5] == '6' && str[6] > '7')
		return (0);
	else if (str[0] == '4' && str[1] == '2' && str[2] == '9' && str[3] == '4'
		&& str[4] == '9' && str[5] == '6' && str[6] == '7' && str[7] > '2')
		return (0);
	else if (str[0] == '4' && str[1] == '2' && str[2] == '9' && str[3] == '4'
		&& str[4] == '9' && str[5] == '6' && str[6] == '7' && str[7] == '2'
		&& str[8] == '9' && str[9] > '5')
		return (0);
	return (1);
}
