#include <stdio.h>
#include "main.h"

/**
 * times_table - time table
 *multiple: 0
 * neuf: 0
 */

void times_table(void)
{
	int multiple, neuf;

	for (multiple = 0; multiple <= 9; multiple++)
	{
		for (neuf = 0; neuf <= 9; neuf++)
		{
			if ((multiple * neuf) / 10 != 0)
			{
				_putchar(((multiple * neuf) / 10) + '0');
			}
			_putchar(((multiple * neuf) % 10) + '0');
			if (neuf < 9)
			{
				_putchar(',');
				_putchar(' ');

				if ((multiple * (neuf + 1)) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
