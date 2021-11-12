#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list.
 *
 *@head: parameter function.
 *
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *aux_free;

	while (head)
	{
		aux_free = head;

		head = head->next;

		free(aux_free->str);

		free(aux_free);
	}

}
