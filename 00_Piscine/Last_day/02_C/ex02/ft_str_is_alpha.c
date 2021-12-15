/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:04:43 by vheran            #+#    #+#             */
/*   Updated: 2021/09/06 23:13:08 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
ATTENTION*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
		{
			count++;
		}
		i++;
	}
	if (i == count)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}

/*int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	printf("%d\n", ft_str_is_alpha(argv[1]));
	return (0);
}*/

/*int	main(void)
{
	char	str0[15] = "Ahoy";
	char	str1[15] = "Ahoy 42 !";
	char	str2[15] = "Hello World";
	char	str3[15] = "Bienvenue!";
	char	str4[15] = "";
	int		result0;
	int		result1;
	int		result2;
	int		result3;
	int		result4;

	result0 = ft_str_is_alpha(str0);
	result1 = ft_str_is_alpha(str1);
	result2 = ft_str_is_alpha(str2);
	result3 = ft_str_is_alpha(str3);
	result4 = ft_str_is_alpha(str4);
	printf("%d\n", result0);
	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	printf("%d", result4);
	return (0);
}*/
