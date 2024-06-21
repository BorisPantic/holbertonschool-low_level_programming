#include <stdio.h>
#include "main.h"

/**
 *
 */
void times_table(void)
{
    int i = 9;
    int j = 0;
    int z;
    i = 9;
    do (j + 1; j++)
    while (j == 9)
        {
	    z = i * j;
            _putchar(z);
            if (j < 9)
            {
                _putchar(',');
		_putchar(' ');
            }
        }
       _putchar('\n');
}
