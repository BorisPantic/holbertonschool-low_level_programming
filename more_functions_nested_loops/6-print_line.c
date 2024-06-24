#include "main.h"

/**
 *print_line - print a line with the value of n.
 *@n: value that determine the lenght of _ line.
 */

void print_line(int n)
{
int z;

	for (z = 0; z < n; z++)
	{
		_putchar('_');
		if (n <= 0)
		{
		_putchar('\n');
		}
	}
	_putchar('\n');
}
