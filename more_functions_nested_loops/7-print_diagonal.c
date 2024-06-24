#include "main.h"

/**
 *print_diagonal - Print a diagonal with the n value
 *@n: Value that determine how long is the diagonal
 */

void print_diagonal(int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		_putchar(' ');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\\');
	_putchar('\n');
}
