#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure in header
 * @age: dog age
 * @owner: owner of the dog
 * @name: name of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
