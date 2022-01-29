#include "hash_tables.h"
/**
 * key_index - give the key index.
 * @key: name of key.
 * @size:size of the hash table.
 * Return: index where pair key value was stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	hash = hash_djb2(key);
	hash = hash % size;
	return (hash);
}
