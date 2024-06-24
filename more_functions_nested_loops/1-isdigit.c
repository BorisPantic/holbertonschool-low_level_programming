#include "main.h"

/**
 *_isdigit - check if it's a number or else.
 *@c: random value to check
 *Return: 1 if it's a number and 0 for else value.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

