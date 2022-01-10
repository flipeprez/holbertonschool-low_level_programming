#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of the list.
 * @head:pointer to the first pointer.
 * @n:value new node add.
 * Return:pointer.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (!n_node)

		return (NULL);
	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = NULL;
	if (!(*head))
	{
		*head = n_node;
		return (*head);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	n_node->prev = tmp;
	tmp->next = n_node;
	tmp = n_node;
	return (*head);
}
