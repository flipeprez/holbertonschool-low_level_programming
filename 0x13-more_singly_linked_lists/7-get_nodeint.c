#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t.
 *
 *@index: name variable.
 *@head: pointer name.
 * Return: nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int vaux = 0;

	while (head && vaux != index)
	{
		head = head->next;
		vaux++;
	}
	if (head)
		return (head);
	else
		return (NULL);
}
