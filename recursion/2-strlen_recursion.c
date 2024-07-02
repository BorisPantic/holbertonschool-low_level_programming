#include "main.h"

/**
 *_strlen_recursion - lenght of a string with recursion
 *@s: string
 *Return: Lenght or null
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}
