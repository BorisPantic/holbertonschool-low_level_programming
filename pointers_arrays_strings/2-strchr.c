#include "main.h"

/**
 *_strchr - check a character in a string
 *@s: string
 *@c: character to find
 *Return: pointer to c or 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
