/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlale-de <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 22:34:11 by jlale-de          #+#    #+#             */
/*   Updated: 2021/09/19 20:18:59 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ft_getnb(int fd)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (str == NULL)
		return (0);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

char	*ft_getwd(int fd, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (str == NULL)
		return (0);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

t_list	*process(char *dict)
{
	int		i;
	int		fd;
	char	c[1];
	t_list	*tab;
	char	*tmp;

	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (0);
	tab = malloc(sizeof(t_list) * 42);
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < 41)
	{
		tab[i].nb = ft_atoi(ft_getnb(fd));
		read(fd, c, 1);
		while (c[0] == ' ' || c[0] == ':')
			read(fd, c, 1);
		tmp = ft_getwd(fd, c);
		tab[i++].wd = ft_strdup(tmp);
		free(tmp);
	}
	close(fd);
	return (tab);
}
