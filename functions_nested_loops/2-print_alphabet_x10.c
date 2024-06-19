#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - fuction who print alphabet 10 times .
 */

void print_alphabet_x10(void)
{
int i;

char a = 'a';

for (i = 0 ; i < 10 ; i++)

{
while (a <= 'z')
_putchar(a++);
_putchar('\n');
}
}
