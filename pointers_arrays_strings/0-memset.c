#include "main.h"

/**
 *_memset - fill memory with constant bytes
 *@s: pointer to string
 *@b: constant
 *@n: bytes memory pointed by *s
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
