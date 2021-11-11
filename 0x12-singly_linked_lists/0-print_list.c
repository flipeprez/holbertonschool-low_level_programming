#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list  - print all the elements of list.
 *
 *@h: value name.
 *
 * Return: elements of the list.
 */

size_t print_list(const list_t *h)
{
	int node = 0;

	if (h)
	{
		node++;
	if (h->str == NULL)
		printf("[0] (nil)\n");

	else
	printf("[%d] %s\n", h->len, h->str);
	node += print_list(h->next);
	}
	return (node);
}
