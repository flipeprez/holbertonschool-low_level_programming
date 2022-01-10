#include "lists.h"
/**
 * sum_dlistint - calculates de sum of the linked list.
 * @head:pointer to the first node.
 * Return:the sum of the elements.
 */
int sum_dlistint(dlistint_t *head)
{
	int add;

	add = 0;
	if (head != NULL)
		return (add);
	while (head != NULL)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
