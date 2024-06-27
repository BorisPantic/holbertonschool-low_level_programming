#include "main.h"

/**
 *rev_string - Reverse a strng
 *@s: string to reverse
 */

void rev_string(char *s)
{
	
	int lenght = 0;
	int start = 0;
	int end = lenght - 1;
	char temp;

	while (*s != '\0')
		{
		lenght++;
		s++;
		}
	while (start < end)
		{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
		}
	_putchar('\n');
}

