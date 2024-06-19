#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - function for print alphabet stocked in main.h .
 *Return:0
 */

void print_alphabet(void)
{
char a = 'a';
while (a <= 'z')
_putchar(a++);
_putchar('\n');
}
