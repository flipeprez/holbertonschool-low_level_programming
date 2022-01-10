#include "lists.h"
/**
 * get_dnodeint_at_index - return the node like a index.
 * @head:pointer to the first node.
 * @index:index to return.
 * Return:index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int indx;

	for (indx = 0; head != NULL && indx <= index; indx++)
	{
		if (indx == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
