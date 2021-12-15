/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheran <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:18:03 by vheran            #+#    #+#             */
/*   Updated: 2021/09/04 21:35:30 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	ft_write_row(int column, char left, char middle, char right);
/*La commande ft_write_row affiche les lignes de notre rectangle et prend en compte 4 parametres :
 * - la longueur de notre ligne, respectivement la largeur du rectangle = int column;
 * - le caractere qui sera affiche a gauche = char left;
 * - le caractere qui sera affiche et potentiellement repete au centre = char middle;
 * - le caractere qui sera affiche a droite = char right*/

void	rush(int x, int y)
{
	int	row;

	row = y;
	/*On commence par verifier si x ou y est egal a 0, auquel cas il ne faut rien afficher :*/
	if (x > 0 && y > 0)
	{
		/*Des lors que ni x ni y n'est egal a zero, on affiche la premiere faisant x caracteres avec parametre de gauche A, milieu B et droite A :*/
		ft_write_row(x, 'A', 'B', 'A');
		/* L'etape suivante est de verifier si il y a d autre lignes a afficher, ce quui serait le cass si y est superieur a 1 :*/
		if (y > 1)
		{
			/*Dans ce cas, on commence par un retour a la ligne :*/
			ft_putchar('\n');
			/*S il y a plus de 2 lignes a afficher au total, il faut afficher des lignes intermediaires a hauteur de y - 2, vu qu il y a deja la ligne superieur et inferieure, en repetant la fonction de la premiere ligne mais en changeant ses parametres de Left, Middle et Right :*/
			while ((row - 2) > 0)
			{
				ft_write_row(x, 'B', ' ', 'B');
				ft_putchar('\n');
				/*En decrementant les row, ca va nous permettre de nous arreter quand on a plus besoin de lignes intermediaires, soit lorsque row - 2 = 0 : */
				row--;
			}
			/*Enfin, on affiche la ligne inferieure de la meme maniere que precedemment, en modifiant les parametres de Left, Middle et Right : */
			ft_write_row(x, 'C', 'B', 'C');
		}
	}
	/*Si y ou x est egal a 0, on demande de ne rien afficher : */
	else
	{
		ft_putchar('\n');
	}
}

void	ft_write_row(int column, char left, char middle, char right)
{
	int	col;

	col = column;
	/*La methode dde generation des differentes colonnes est la meme que pour les lignes, la seul difference etant qu on decremente les colonnes au lieu des rangees: */
	ft_putchar(left);
	if (col > 1)
	{
		while ((col - 2) > 0)
		{
			ft_putchar(middle);
			col--;
		}
		ft_putchar(right);
	}
}
