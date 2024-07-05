#include "main.h"

/**
 *_strpbrk - search a string for a set of bytes
 *@s: pointer to the string
 *@accept : accept string
 *Return:0
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		++s;
	}
	return (0);
}
