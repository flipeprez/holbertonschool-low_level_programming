#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - print all the elements of list.
 *
 *@head: parameter function.
 *@str: parameter function.
 *
 * Return: elements of the list.
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *n_list = malloc(sizeof(list_t));

	if (n_list == NULL)
		return (NULL);

	n_list->len = strlen(str);
	n_list->str = strdup(str);
	n_list->next = *head;
	*head = n_list;
	return (*head);

}
