#include <stdio.h>
#include "3-calc.h"

/**
 *op_add - sum of a and b
 *@a: first value
 *@b: second value
 *Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - difference of a and b
 *@a: first value
 *@b: second value
 *Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - product of a and b
 *@a: first value
 *@b: second value
 *Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division of a and b
 *@a: first value
 *@b: second value
 *Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - modulo of a / b
 *@a: first value
 *@b: second value
 *Return: modulo of a / b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
