#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates a memory block using malloc and free.
 * @ptr: name value.
 * @old_size: name value.
 * @new_size:name value.
 *
 * Return: reallocates a memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *na;

	if (new_size == old_size)
	return (ptr);

	na = malloc(new_size);

	if (!ptr)
	{
	return (na);
	}

	if (new_size == 0)
	{
		free(ptr);
	return (NULL);
	}

	na = memcpy(na, ptr, old_size);
	free(ptr);

	return (na);

}
