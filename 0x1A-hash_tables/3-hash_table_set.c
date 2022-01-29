#include "hash_tables.h"
/**
  * hash_table_set - add element
  * @ht: add or update the key/value to th hash table
  * @key: the key
  * @value: value associated to key
  * Return: 1 if succeed, otherwise 0
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_indx;
	hash_node_t *n_node;

	if (!value || !ht)
		return (0);
	key_indx = key_index((unsigned char *)key, ht->size);
	if (ht->array[key_indx] && strcmp(ht->array[key_indx]->key, key) == 0)
	{
		free(ht->array[key_indx]->value);
		ht->array[key_indx]->value = strdup(value);
		return (1);
	}
	n_node = malloc(sizeof(*n_node));
	if (!n_node)
	{
		return (0);
	}
	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = ht->array[key_indx];
	ht->array[key_indx] = n_node;
	return (1);
}
