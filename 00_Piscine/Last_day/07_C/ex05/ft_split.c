/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:51:36 by vheran            #+#    #+#             */
/*   Updated: 2021/09/22 21:32:57 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_issep(char *sep, char c)
{
	int	i;

	i = -1;
	while (sep[++i])
		if (c == sep[i])
			return (1);
	return (0);
}

int	ft_c_str(char *str, char *sep, int i)
{
	int	c;

	c = 0;
	while (str[i])
	{
		if ((ft_issep(sep, str[i]) && !ft_issep(sep, str[i - 1]))
			|| (str[i + 1] == '\0' && !ft_issep(sep, str[i])))
			c++;
		i++;
	}
	return (c);
}

char	*ft_wordup(char *str, char *sep)
{
	int		l;
	int		i;
	char	*word;

	i = 0;
	l = 0;
	while (!ft_issep(sep, str[l]) && str[l])
		l++;
	word = malloc((l + 1) * sizeof(char));
	if (word == 0)
		return (NULL);
	word[l] = '\0';
	while (i < l)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

void	ft_fill(char **array, char *str, char *sep)
{
	int	word_index;

	word_index = 0;
	while (ft_issep(sep, *str))
		str++;
	while (*str)
	{
		array[word_index++] = ft_wordup(str, sep);
		while (!(ft_issep(sep, *str)) && *str)
			str++;
		while (ft_issep(sep, *str) && *str)
			str++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		c;
	int		i;
	char	**result;

	i = 0;
	while (ft_issep(charset, str[i]))
		i++;
	c = ft_c_str(str, charset, i);
	result = malloc((c + 1) * sizeof(char *));
	if (result == 0)
		return (NULL);
	ft_fill(result, str, charset);
	result[c] = 0;
	return (result);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**array;
	int		i;

	if (argc < 3)
	{
		printf("Merci d'entrer 2 arguments (str, charset)");
		return (0);
	}
	array = ft_split(argv[1], argv[2]);
	i = 0;
	while (array[i] != 0)
	{
		if (i != 0)
			printf(" ");
		printf("[%s]", array[i]);
		free(array[i]);
		i++;
	}
	free(array);
	printf("\n");
	//while (1 > 0)
	//	i = 0;
	return (0);
}*/
