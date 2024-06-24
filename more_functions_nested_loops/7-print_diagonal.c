#include "main.h"

/**
 *print_diagonal - Print a diagonal with the n value
 *@n: Value that determine how long is the diagonal
 */

void print_diagonal(int n)
{
	int z;

	for (z = 1; z < n; z++)
	{
		_putchar(' ');
		return;
	}
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	_putchar('\\');
	_putchar('\n');
}
