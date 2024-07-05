#include "main.h"

/**
 * factorial - that return factorial of n
 * @n: factorial value
 * Return:recursion of n
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
}
