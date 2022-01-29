#include "hash_tables.h"

/**
 * hash_table_create- create a hash table.
 * @size: size of the array
 * Return: a pointer to the hashtable.
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *rootindex = malloc(sizeof(hash_table_t));

	if (rootindex == NULL || size == 0)
		return (NULL);
	rootindex->array = malloc(sizeof(void *) * size);
	if (rootindex->array == NULL)
		return (NULL);
	rootindex->size = size;

	func_init_null_arr(rootindex);
	return (rootindex);
}

/**
 * func_init_null_arr - init array to NULL
 * @rootindex: pointer
 */
void func_init_null_arr(hash_table_t *rootindex)
{
	unsigned long int i;

	for (i = 0; i < rootindex->size; i++)
		rootindex->array[i] = NULL;
}
