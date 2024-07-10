#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create an array of char
 *@size: size of the value
 *@c:value to print
 *Return: NULL or array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i; /* i = index */
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}



