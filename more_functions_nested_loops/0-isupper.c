#include "main.h"
#include <stdio.h>

/**
 *
 */

int _isupper(int c)
{
	if (c <= 'Z')
	{
		return(1);
	}
	if (c <= 'z')
	{
		return(0);
	}
}
