#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function name.
 * @b:value name.
 * Return: allocates memory using malloc.
 */

void *malloc_checked(unsigned int b)

{
	int *va;

	va = malloc(b);

	if (va == 0)
	{
		exit(98);
	}
	return (va);

}
