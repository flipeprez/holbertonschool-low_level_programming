#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node.
 * @head: pointer to the first node.
 * @index: number of the node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int contador;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (contador = 0; temp != NULL; contador++)
	{
		if (contador == index)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
