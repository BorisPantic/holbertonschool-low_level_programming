#include "main.h"

/**
 *rev_string - Reverse a strng
 *@s: string to reverse
 */

void rev_string(char *s)
{
	
	int lenght = _strlen[s];
	int start = 0;
	int end = lenght - 1;
	char temp;

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

