#include <stdio.h>

/**
 *main - prints all the number 1 to 10 followed by a new line.
 *Return:0
 */

int main(void)
{
char a = '0';

while (a <= 10)

putchar(a++);

putchar('\n');

return (0);
}
