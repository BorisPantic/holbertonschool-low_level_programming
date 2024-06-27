#include "main.h"
#include <stdio.h>

/**
 *_strcpy- function that copies the string pointed
 *@dest: value
 *@src: value
 *Return:dest
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}
