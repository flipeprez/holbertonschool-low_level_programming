#include "lists.h"

/**
 * pop_listint - delete the head of the note.
 *
 *@head:pointer:
 * Return: 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *vaux;
	int naux;

	if (!(*head))
		return (0);
	naux = (*head)->n;


		vaux = *head;

		(*head) = (*head)->next;

		free(vaux);

	return (naux);
}
