#include "main.h"

/**
 *
 */

void print_line(int n)
{
	if (n >= 0)
	{
		_putchar(n * '_');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
