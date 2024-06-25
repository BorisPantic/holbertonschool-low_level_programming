#include "main.h"
#include <stdio.h>

/**
 *swap_int - swap the value of 2 variable.
 *@a: a
 *@b: b
 */

void swap_int(int *a, int *b)
{
	int temp = a;
	a = b;
	b = temp;
}
