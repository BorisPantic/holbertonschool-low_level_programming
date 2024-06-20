#include <stdio.h>
#include "main.h"

/**
 *
 */
void times_table(void)
{
    int i, j;
    for (i = 0; i < 9 + 1; i++)
    {
        for (j = 0; j < 9 + 1; j++)
        {
            _putchar("%d", i * j);
            if (j < 9)
            {
                _putchar(", ");
            }
        }
        _putchar("\n");
    }
}
