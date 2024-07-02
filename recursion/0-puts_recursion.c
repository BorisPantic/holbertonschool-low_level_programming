#include "main.h"

/**
 * _puts_recusion - Print a string with recursion
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	_putchar('\n');
}
