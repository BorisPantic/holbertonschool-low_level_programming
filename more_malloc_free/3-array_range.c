#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - fuction that create array of int
 *@min: minimum
 *@max: maximum
 *Return: NULL or array
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
