#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - print to 98
 *Return:0
 *@n:value
 */

void print_to_98(int n)
{
int z = '0';
while (z <= '98')
{
_putchar(z);
if (n != '98')
{
_putchar(',');
_putchar(' ');
}
z++;
}
return (0);
}

