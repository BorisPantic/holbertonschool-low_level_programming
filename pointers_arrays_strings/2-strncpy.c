#include "main.h"

/**
 *_strncpy- function that copies a string
 *@dest: destination
 *@src: source
 *@n: n
 *Return:dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n ; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
