#include "hash_tables.h"
/**
 * hash_table_get - that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return:value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;
	const unsigned char *u_key;

	if (ht == NULL || key == NULL)
		return (NULL);
	u_key = (const unsigned char *)key;
	idx = key_index(u_key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
