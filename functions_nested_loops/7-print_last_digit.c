#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 * Return:r
 * @r: number
 * @x: r % 10
 */

int print_last_digit(int r)
{
	int x;

	x = r % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
