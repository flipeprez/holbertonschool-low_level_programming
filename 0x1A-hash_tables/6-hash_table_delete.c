#include "hash_tables.h"
/**
 * hash_table_delete - free the hash table.
 * @ht:pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	hash_node_t *otemp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			otemp = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = otemp;
		}
	}
	free(ht->array);
	free(ht);
}
