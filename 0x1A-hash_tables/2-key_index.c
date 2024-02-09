/* Author -- Gadoskey */
#include "hash_tables.h"
/**
 * key_index - Get the index at which a key/value pair should be stored.
 * @key: The key to get its index.
 * @size: The size of the array of the hash table.
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
