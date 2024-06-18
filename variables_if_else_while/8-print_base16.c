#include <stdio.h>

/**
 *
 */

int main(void)
{
char a = '0';
char b = 'a';
while (a <= '9')
putchar(a++);
while (b <= 'f')
putchar(b++);
putchar('\n');
return (0);
}
