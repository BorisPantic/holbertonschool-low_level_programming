#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - print to 98
 *Return:0
 *@n:value
 */

void print_to_98(int n)
{
	if (n < 98)
	{
	for (; n < 98; n++)
	printf("%d, ", n);
	}
	else
	{
	for (; n > 98; n--)
	printf("%d, ", n);
	}
	printf("%d\n", 98);
}
