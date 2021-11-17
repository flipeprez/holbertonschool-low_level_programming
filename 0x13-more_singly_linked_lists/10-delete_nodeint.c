#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index.
 *@head: pointer.
 *@index: name variable.
 * Return: 1 in case of succeeded -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *aux;
	listint_t *new_node;

	aux = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && aux != NULL && index != 0; i++)
		aux = aux->next;
	if (aux == NULL)
		return (-1);
	if (index == 0)
	{
		new_node = aux->next;
		free(aux);
		*head = new_node;
	}
	else
	{
		if (aux->next == NULL)
			new_node = aux->next;
		else
			new_node = aux->next->next;
		free(aux->next);
		aux->next = new_node;
	}
	return (1);
}
