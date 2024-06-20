#include <stdio.h>

/**
 *  _isalpha - check if the caracter is UPPER or LOWER case then print 1 if not print 0
 *  Return: 1 if lower or upper case 0if else
 *  @c: The caracter check
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		{
		return (1);
		}
	if (c >= 'A' && c <= 'Z')
		{
		return (1);
		}
	else
		{
		return (0);
		}
}
