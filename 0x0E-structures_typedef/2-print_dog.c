#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog.
 * @d:varable name.
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	if (d->name == 0)
		printf("Name: (nil)");
	else
		printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	if (d->owner == 0)
		printf("Owner: (Nil)");
	else
		printf("Owner: %s", d->owner);

	}




}
