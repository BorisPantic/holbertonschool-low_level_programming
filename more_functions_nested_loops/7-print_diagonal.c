#include "main.h"

/**
 *print_diagonal - Print a diagonal with the n value
 *@n: Value that determine how long is the diagonal
 */

void print_diagonal(int n)
{
	int z;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (z = 0; z < n; z++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
