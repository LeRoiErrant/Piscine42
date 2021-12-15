/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:58:23 by vheran            #+#    #+#             */
/*   Updated: 2021/09/09 10:58:26 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
/*#include <stdlib.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;

	l = 0;
	while (src[l] != '\0')
		l++;
	i = 0;
	if (size == 0)
		return (l);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (l);
}

/*int	main(int argc, char **argv)
{
	(void)			argc;
	(void)			argv;
	unsigned int	size;

	size = atoi(argv[3]);
	printf("%s\n", argv[1]);
	ft_strlcpy(argv[1], argv[2], size);
	printf("%s\n", argv[1]);
	return (0);
}*/

/*int	main(void)
{
	char			src1[15] = "Ahoy 42 !";
	char			des1[15] = "Hello World !";
	char			src2[15] = "Ahoy 42 !";
	char			des2[15] = "Hello World !";
	char			src3[15] = "Ahoy !";
	char			des3[15] = "Hello World !";
	char			src4[15] = "Ahoy !";
	char			des4[15] = "Hello World !";
	unsigned int	s;

	s = 8;
	printf("Rtrn L : %lu\n Prt StL : %s\n", strlcpy(des1, src1, s), des1);
	printf("Rtrn C: %u\n Prt StC : %s\n", ft_strlcpy(des2, src2, s), des2);
	printf("Rtrn L : %lu\n Prt StL : %s\n", strlcpy(des3, src3, s), des3);
	printf("Rtrn C: %u\n Prt StC : %s\n", ft_strlcpy(des4, src4, s), des4);
	return (0);
}*/
