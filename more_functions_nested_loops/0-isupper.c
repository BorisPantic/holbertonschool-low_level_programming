#include "main.h"
#include <stdio.h>

/**
 *_isupper - check if c is UPPER or LOWER
 *@c: random value to check
 *Return: 1 if UPPERCASE and 0 if LOWERCASE
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
