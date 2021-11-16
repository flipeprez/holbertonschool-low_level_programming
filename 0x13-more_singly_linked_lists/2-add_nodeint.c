#include "lists.h"

/**
 * add_nodeint - print all the elements of list.
 *
 *@head: parameter function.
 *@n: parameter function.
 *
 * Return: elements of the list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *n_list = malloc(sizeof(listint_t));

	if (n_list == NULL)
		return (NULL);

	n_list->next = *head;
	n_list->n = n;
	*head = n_list;
	return (*head);

}
