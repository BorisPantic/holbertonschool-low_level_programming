#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - give memory with malloc
 *@b: size of memory
 *Return: 98 or adress
 */

void *malloc_checked(unsigned int b)
{
	void *adress;

		adress = malloc(b);

		if (adress == NULL)
			exit(98);
	return (adress);
}
