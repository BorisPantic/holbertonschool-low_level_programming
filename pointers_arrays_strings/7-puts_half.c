#include "main.h"

/**
 *puts_half - Puts half of a string
 *@str: string
 */

void puts_half(char *str)
{
	int lenght = 0;
	int i;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	lenght = lenght + 1;
	lenght = lenght / 2;

	for (i = lenght; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
