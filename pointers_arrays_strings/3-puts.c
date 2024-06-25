#include "main.h"
#include <stdio.h>

/**
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (i != '\0')
	{
	i++;
	*str++;
	_putchar(*str);
	}
}

