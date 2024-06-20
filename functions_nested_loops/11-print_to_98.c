#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - print to 98
 *Return:0
 *@n:value
 */

void print_to_98(int n)
{
int n = '0';
while (n <= '98')
{
_putchar(n);
if (n != '98')
{
_putchar(',');
_putchar(' ');
}
n++;
}
return (0);
}

