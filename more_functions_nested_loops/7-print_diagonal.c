#include "main.h"

/**
 *
 */

void print_diagonal(int n)
{
	int z;

	for (z = 0; z < n;z++)
	{
		_putchar(' ');
		if (z = n)
		{
		_putchar('\\');
		}
			if (n <= 0)
			{
				_putchar('\n');
			}
	}
	_putchar('\n');
}
