#include "main.h"

/**
 *
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if(*s != '\0')
		{
			l++;
			s++;
		}
	return (l);
}
