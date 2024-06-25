#include "main.h"
#include <stdio.h>

/**
 *_strlen - function that copie strlen from standard library
 *@s: Pointer use for _strlen
 *Return:string lenght
 */

int _strlen(char *s)
{
int lenght = 0;

	while (*s != '\0')
		{
		lenght++;
		s++;
		}
	return (lenght);
}
