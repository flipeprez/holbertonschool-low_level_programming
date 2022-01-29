#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - print the hash table.
 * @ht: pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	int sign;
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	sign = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (sign == 0)
				sign = 1;
			else
				printf(", ");
			printf("'%s' : '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
