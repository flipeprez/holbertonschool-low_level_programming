#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

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

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		aux_free = head->next;
		free(head);
		head = aux_free;
	}
	free(head);
}
