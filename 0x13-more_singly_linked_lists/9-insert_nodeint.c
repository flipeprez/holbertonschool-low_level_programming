#include "lists.h"

/**
 * insert_nodeint_at_index - fun.
 * @head: pointer name.
 * @idx: index for new node.
 * @n: name variable.
 * Return: address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *new;
	unsigned int pos = 0;

		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		if (idx == 0)
		{
			new->next = (*head);
			*head = new;
			return (*head);
		}
		while (pos < idx - 1)
		{
			if (tmp->next)
				tmp = tmp->next;
			else
				return (NULL);
			pos++;
		}
		if (pos >= idx)
		{
			free(new);
			return (NULL);
		}
		new->next = tmp->next;
		tmp->next = new;
		return (new);
}
