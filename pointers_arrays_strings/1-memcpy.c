#include "main.h"

/**
 *_memcpy - copy memory
 *@dest: destination str
 *@src: source str
 *@n: bytes to copy
 *Return: destination str
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
