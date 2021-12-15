/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 23:26:11 by vheran            #+#    #+#             */
/*   Updated: 2021/09/10 15:15:09 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_charupcase(int i, int j, char *str);

char	ft_charlowcase(int i, int j, char *str);

int		ft_char_is_alphanumeric(char c);

char	*ft_strcapitalize(char *str)
{
	int	i; int	j;

	i = 0;
	if (!str)
		return (0);
	if (97 <= str[0] && str[0] <= 122)
		str[0] = str[0] - 32;
	i = 1;
	j = 0;
	while (str[i] != '\0')
	{
		ft_charupcase(i, j, str);
		ft_charlowcase(i++, j++, str);
	}	
	return (str);
}

char	ft_charupcase(int i, int j, char *str)
{
	int		r;
	char	ch;

	r = ft_char_is_alphanumeric(str[j]);
	ch = str[i];
	if ((r == 0) && (97 <= ch && ch <= 122))
		str[i] = str[i] - 32;
	return (0);
}

char	ft_charlowcase(int i, int j, char *str)
{
	int		r;
	char	ch;

	r = ft_char_is_alphanumeric(str[j]);
	ch = str[i];
	if ((r == 1) && (65 <= ch && ch <= 90))
		str[i] = str[i] + 32;
	return (0);
}

int	ft_char_is_alphanumeric(char c)
{
	if ((97 <= c && c <= 122) || (65 <= c && c <= 90) || (48 <= c && c <= 57))
		return (1);
	else
		return (0);
}

/*int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	ft_strcapitalize(argv[1]);
	printf("%s\n", argv[1]);
	return (0);
}*/

int	main(void)
{
	char	str[] ="PAFEJ{AET pI JRE[093WEWbibfeE rUu5895{";

	printf("Before capitalize : %s\n", str);
	printf("After capitalize :%s\n", ft_strcapitalize(str));
	return (0);
}
