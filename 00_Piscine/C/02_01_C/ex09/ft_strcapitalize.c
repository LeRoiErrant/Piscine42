/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 23:26:11 by vheran            #+#    #+#             */
/*   Updated: 2021/09/08 20:59:10 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_charupcase(int i, int j, char *str);

char	ft_charlowcase(int i, int j, char *str);

int		ft_char_is_alpha(char c);

int		ft_char_is_numeric(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0')
	{
		return (0);
	}
	if ('a' <= str[0] && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	i++;
	j = i - 1;
	while (str[i] != '\0')
	{
		ft_charupcase(i, j, str);
		ft_charlowcase(i, j, str);
		i++;
		j++;
	}		
	return (str);
}

char	ft_charupcase(int i, int j, char *str)
{
	int		r;
	char	ch;

	r = ft_char_is_alpha(str[j]) + ft_char_is_numeric(str[j]);
	ch = str[i];
	if ((r == 0) && ('a' <= ch && ch <= 'z'))
	{
		str[i] = str[i] - 32;
	}
	return (0);
}

char	ft_charlowcase(int i, int j, char *str)
{
	int		r;
	char	ch;

	r = ft_char_is_alpha(str[j]) + ft_char_is_numeric(str[j]);
	ch = str[i];
	if ((r == 1) && ('A' <= ch && ch <= 'Z'))
	{
		str[i] = str[i] + 32;
	}
	return (0);
}

int	ft_char_is_alpha(char c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

int	ft_char_is_numeric(char c)
{
	return ('0' <= c && c <= '9');
}

/*int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	ft_strcapitalize(argv[1]);
	printf("%s\n", argv[1]);
	return (0);
}*/

/*int	main(void)
{
	char	str[] ="hELlo w0RLd+the42Crew";

	printf("Before capitalize : %s\n", str);
	printf("After capitalize :%s\n", ft_strcapitalize(str));
	return (0);
}*/
