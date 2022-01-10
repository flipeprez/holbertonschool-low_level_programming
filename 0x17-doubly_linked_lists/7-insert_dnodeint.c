#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node.
 * @h:header pointer.
 * @idx:index.
 * @n:value.
 * Return: new node address.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
		unsigned int cont = 0;
		dlistint_t *n_node = NULL, *t_node = *h;

		if (!h)
			return (NULL);

		if (idx == 0)
			return (add_dnodeint(h, n));
		while (t_node && cont < idx)
		{
			if ((cont + 1) == idx)
			{

				n_node = malloc(sizeof(*n_node));
				if (!n_node)
					return (NULL);

				n_node->n = n;
				n_node->next = t_node->next;
				n_node->prev = t_node;
				if  (t_node->next)
					t_node->next->prev = n_node;
				t_node->next = n_node;
				return (n_node);
			}
			t_node = t_node->next;
			cont++;
		}
	return (NULL);
}
