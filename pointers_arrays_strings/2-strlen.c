#include "main.h"
#include <stdio.h>

/**
 *
 */

int _strlen(char *s)
{
int lenght = 0;

	while (*s != '\0')
		{
		lenght++;
		}
	return (lenght);
}
