#include "main.h"

/**
 *rev_string - Reverse a strng
 *@s: string to reverse
 */

void rev_string(char *s)
{
	int lenght = 0;
	int start = 0;
	int end;
	int temp;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	end = lenght - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}

}
