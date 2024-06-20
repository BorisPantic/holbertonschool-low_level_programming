#include <stdio.h>
#include "main.h"

/**
 *
 */
void times_table(void)
{
    char i;
    char j;
    char z;

    z = i * j;
    for (i = 0; i < 9 + 1; i++)
    {
        for (j = 0; j < 9 + 1; j++)
        {
            _putchar(z);
            if (j < 98)
            {
                _putchar(',');
		_putchar(' ');
            }
        }
        _putchar('\n');
    }
}
