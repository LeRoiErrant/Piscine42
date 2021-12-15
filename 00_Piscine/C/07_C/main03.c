/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:34:32 by vheran            #+#    #+#             */
/*   Updated: 2021/09/20 16:27:26 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int		arg;
	char	**strs;
	int		i;
	int		j;
	char	*tmp;

	arg = atoi(argv[1]) + 3;
	if (argc == 1 || argc != arg)
	{
		printf("Nombre incorrect d'arguments");
		return (0);
	}
	i = 0;
	j = 3;
	strs = malloc(atoi(argv[1]) * sizeof(char *));
	while (j < arg)
	{
		strs[i] = (char *)malloc((ft_strlen(argv[j]) + 1) * sizeof(char));
		strcpy(strs[i], argv[j]);
		i++;
		j++;
	}
		tmp = ft_strjoin((arg - 3), strs, argv[2]);
		printf("%s\n", tmp);
	i = 0;
	free(tmp);
	return (0);
}

