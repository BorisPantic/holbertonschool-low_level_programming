#include "main.h"

/*
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	char *de = dest;
	while (*de != '\0')
	{
		de++;
	}

	while (n > 0 && *src != '\0')
	{
		*de = *src;
		de++;
		src++;
		n--;
	}
	*de = '\0';
	return (dest);
}
