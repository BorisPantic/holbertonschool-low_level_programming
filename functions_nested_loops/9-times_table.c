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
    i = 9;
        for (j = 0;i < j + 1; j++)
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
