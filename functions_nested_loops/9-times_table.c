#include <stdio.h>
#include "main.h"

/**
 *
 */
void times_table(void)
{
int i;
int j;
int z;
	for (j = 9;)
	{
		for (i = 0;i <= j; i++)
		{
			z = i * j;
			_putchar(z);
		
			while (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
