#include "lists.h"
/**
 * add_dnodeint - add a node at the beggining.
 * @head: first pointer to the first node.
 * @n:value to add.
 * Return:pointer.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));

	if (!n_node)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = NULL;

	if (!*head)
	{
		*head = n_node;
		return (*head);
	}
	n_node->next = *head;
	(*head)->prev = n_node;
	*head = n_node;
	return (*head);
}
