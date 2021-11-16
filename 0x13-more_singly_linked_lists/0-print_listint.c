#include "lists.h"

/**
 * print_listint - prints elements of the list
 * @h: list pointer.
 * Return: nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int ava;

	if (h == NULL)
		return (0);

	for (ava = 0; h != NULL; ava++)
	{
		printf("%d", h->n);
		printf("\n");
		h = h->next;
	}
	return (ava);
}
