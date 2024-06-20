#include <stdio.h>
#include <ctype.c>

/**
 * _islower - check if the caracter is lower case or not by returning 1 or 0
 *Return:1 if lower case 0 if else 
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
