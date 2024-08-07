#include "dog.h"
#include <stdio.h>

/**
 *init_dog - initalize variable of dog.h
 *@d: pointer to variable
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
