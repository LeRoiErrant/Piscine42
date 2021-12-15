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
		exit (1);
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
		exit (1);
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
		exit (1);
	tab = malloc(sizeof(t_list) * 42);
	if (tab == NULL)
		exit (1);
	i = 0;
	while (i < 41)
	{
		tab[i].nb = ft_atoi(ft_getnb(fd));
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_getwd(fd, c);
		tab[i].wd = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	close(fd);
	return (tab);
}