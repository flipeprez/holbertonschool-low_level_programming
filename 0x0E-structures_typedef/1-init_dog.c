#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function dog
 * @d:name variable.
 * @age:variable name.
 * @owner:variable name.
 * @name:variable name.
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
