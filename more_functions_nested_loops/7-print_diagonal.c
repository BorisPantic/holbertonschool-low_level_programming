#include "main.h"

/**
 *print_diagonal - Print a diagonal with the n value
 *@n: Value that determine how long is the diagonal
 */

void print_diagonal(int n)
{
	int z;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (y = 0; y < n; y++)
	{
		for (z = 0; z < y; z++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
