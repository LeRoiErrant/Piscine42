/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:54:54 by vheran            #+#    #+#             */
/*   Updated: 2021/09/14 12:24:50 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Merci d'entrer 1 argument (str)\n");
		return (0);
	}
	ft_putstr(argv[1]);
	return (0);
}
