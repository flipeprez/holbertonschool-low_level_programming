#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len  - print all the elements of list.
 *
 *@h: value name.
 *
 * Return: print length of the list.
 */

size_t list_len(const list_t *h)
{
	int node = 0;

	if (h)
	{
		node++;
		node += list_len(h->next);
	}

	return (node);
}
