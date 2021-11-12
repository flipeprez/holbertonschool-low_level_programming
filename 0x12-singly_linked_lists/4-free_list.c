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

	list_t *tmp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
