#include "lists.h"

/**
 * listint_len  - print all the elements of list.
 *
 *@h: value name.
 *
 * Return: print length of the list.
 */

size_t listint_len(const listint_t *h)
{
	int node = 0;

	if (h)
	{
		node++;
		node += listint_len(h->next);
	}

	return (node);
}
