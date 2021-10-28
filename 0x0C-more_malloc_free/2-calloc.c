#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	unsigned int va;

	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(size * nmemb);

	if (p == 0)

		return (NULL);

	for (va = 0; va < nmemb * size; va++)

		p[va] = 0;

	return ((void *) p);
}
