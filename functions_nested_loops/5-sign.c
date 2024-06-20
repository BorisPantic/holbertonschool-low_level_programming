#include <stdio.h>
#include "main.h"

/**
 * print_sign - print + , 0 or - by n value
 * @n: value
 */ 

int print_sign(int n)
{
	if (n > 0)
		{
		_putchar('+');
		return (1);
		}
	if (n == 0)
		{
		_putchar('0');
		return (0);
		}
	if (n < 0)
		{
		_putchar('-');
		return (-1);
		}
	return (0);
}
