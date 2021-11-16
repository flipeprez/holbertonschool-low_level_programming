#include "lists.h"

/**
 * add_nodeint_end - add another element to the list.
 *
 *@head: parameter function.
 *@n: parameter function.
 *
 * Return: elements of the list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_listint = malloc(sizeof(listint_t));
	listint_t *aux_new_listint;

	if (n_listint == NULL)
		return (NULL);

	n_listint->n = n;
	n_listint->next = NULL;

	if ((*head) == NULL)
	{
		*head = n_listint;
		return (n_listint);
	}
	aux_new_listint = *head;

	while (aux_new_listint->next != NULL)
	{
		aux_new_listint = aux_new_listint->next;
	}
	aux_new_listint->next = n_listint;
	return (n_listint);
}

