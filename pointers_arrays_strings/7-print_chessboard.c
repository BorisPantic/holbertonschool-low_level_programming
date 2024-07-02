#include "main.h"

/**
 * print_chessboard - print a chess board
 * @a: array of the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int largeur;
	int hauteur;

	for (largeur = 0; largeur < 8; largeur++)
	{
		for (hauteur = 0; hauteur < 8; hauteur++)

			_putchar(a[largeur][hauteur]);
		_putchar('\n');
	}
}
