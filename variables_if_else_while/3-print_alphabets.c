#include <stdio.h>

/**
 *main - prints alphabet in lowercase and uppercase followed by a new line.
 *Return:0
 */

int main(void)
{

char c = 'a';
char b = 'A';

while (c <= 'z')

putchar(c++);

while (b <= 'Z')

putchar(b++);

putchar('\n');

return (0);
}
