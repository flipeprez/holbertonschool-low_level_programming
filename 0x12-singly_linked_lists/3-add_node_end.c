#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - print all the elements of list.
 *
 *@head: parameter function.
 *@str: parameter function.
 *
 * Return: elements of the list.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *n_list = malloc(sizeof(list_t));
	list_t *aux_n_list;

	if (n_list == NULL)
		return (NULL);

	n_list->str = strdup(str);
	n_list->len = strlen(str);
	n_list->next = NULL;

	if ((*head) == NULL)
	{
		*head = n_list;
		return (n_list);
	}
	aux_n_list = *head;

	while (aux_n_list->next != NULL)
	{
		aux_n_list = aux_n_list->next;
	}
	aux_n_list->next = n_list;
	return (n_list);

}
