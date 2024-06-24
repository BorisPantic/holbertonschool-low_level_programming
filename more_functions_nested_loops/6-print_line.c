#include "main.h"

/**
 *
 */

void print_line(int n)
{
	int z;

        for (z = 0; z < n; z++)
        {
                _putchar('_');
        
        	if (n <= 0)
        	{
                _putchar('\n');
       		}
	}
	_putchar('\n');
}
