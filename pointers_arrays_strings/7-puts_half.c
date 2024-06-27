#include "main.h"

/**
 *
 */

void puts_half(char *str)
{
	int lenght;
	int start;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	
	start = lenght / 2;
	
	if (lenght % 2 != 0)
	{
		start = (lenght / 2) + 1;
	}
	for (int i = start; i < lenght; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
