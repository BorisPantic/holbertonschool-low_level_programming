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

    for (i = 0; i++)
    {
        for (j = 0; j++)
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
}
