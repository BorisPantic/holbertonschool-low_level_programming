#include <stdio.h>
#include "main.h"

/**
 *
 */
void times_table(void)
{
int i = 0;
int j = 9;
int z;
	for (i <= 9;i++);
		{
		z = i * j;
		_putchar(z);
		while (j < 9)
		_putchar(',');
		_putchar(' ');
		}
}
