#include "main.h"

/**
 *_strspn- function that gets the length of a prefix substring
 *@s: it is a pointer of first string
 *@accept: it is the accept string
 *Return: a
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (accept[b] == '\0')
		{
			return (a);
		}
	}
	return (a);
}
