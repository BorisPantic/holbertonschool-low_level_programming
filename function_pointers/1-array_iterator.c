#include "function_pointers.h"

/**
 *array_iterator - function that executes a function given
 *as a parameter on each element of an array
 * @size: size of the array
 * @action: function pointer
 * @array: it is the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
