#include "main.h"

/**
 *print_triangle - function that print triangle
 *@size: value of the triangle
 */

void print_triangle(int size)
{
int a;
int z;
int e;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a < size ; a++)
	{
		for (z = size - a; z >= 1; z--)
		{
			_putchar(' ');
		}
		for (e = 1; e < a; e++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}

