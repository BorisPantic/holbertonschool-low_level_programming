#include "main.h"

/**
 *more_numbers - print 10 times 0 to 14.
 */

void more_numbers(void)
{
int dixfois;
int numbers;

	for (dixfois = 0; dixfois < 10; dixfois++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
			{
				_putchar((numbers / 10) + '0');
			}
		_putchar((numbers % 10) + '0');
		}
	_putchar('\n');
	}
}
