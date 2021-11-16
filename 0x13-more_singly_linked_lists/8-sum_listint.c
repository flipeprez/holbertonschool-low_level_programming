#include "lists.h"
/**
 * sum_listint - return the sum of all the data n of a listint_t
 *
 * @head:pointer name.
 *
 * Return: 0.
 */
int sum_listint(listint_t *head)
{
	int f = 0;
	listint_t *aux = head;

	if (!head)
	return (0);

	while (aux)
	{

		f += aux->n;
		aux = aux->next;
	}
	return (f);

}
