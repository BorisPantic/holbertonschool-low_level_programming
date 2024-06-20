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

    for (i = 0; i < 9 + 1; i++)
    {
        for (j = 0; j < 9 + 1; j++)
        {
	    z = i * j;
            _putchar('0' + z);
            if (j < 9)
            {
                _putchar(',');
		_putchar(' ');
            }
        }
        _putchar('\n');
    }
}
