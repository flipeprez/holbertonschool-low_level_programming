#include "lists.h"

/**
 * free_dlistint - free the list
 * @head:pointer to the first node.
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{

		head = head->next;
		free(head->prev);
	}
	free(head);
}
