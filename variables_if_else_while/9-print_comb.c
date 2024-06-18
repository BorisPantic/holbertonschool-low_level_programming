#include <stdio.h>

/**
 *main - print 0 to 9 with , .
 *Return:0 
 */

int main(void)
{
char i = '0';
char u =',';
char p = ' ';
while (i <= '9')
putchar(i++);
putchar(u);
putchar(p);
putchar('\n');
return (0);
}
