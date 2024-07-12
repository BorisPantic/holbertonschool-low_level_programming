#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - function that unallocate memory of d , owner and age.
 *@d: pointer to dog owner age and name value
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->owner);
	free(d->name);
	free(d);
	}
}
