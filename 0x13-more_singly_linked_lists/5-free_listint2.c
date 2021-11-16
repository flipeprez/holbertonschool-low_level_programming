#include "lists.h"
/**
 * free_listint2 - free list.
 *
 *@head: parameter function.
 *
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *free_aux;

	while (*head)
	{
		free_aux = (*head);

		*head = (*head)->next;

		free(free_aux);
	}
		head = (NULL);
}
