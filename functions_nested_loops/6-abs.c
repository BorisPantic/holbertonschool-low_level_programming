#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: value
 * Return:0
 */

int _abs(int r)
{
	if (r < 0)
		{
		return (-r);
		}
	else
		{
		return (r);
		}
	return (0);
}
