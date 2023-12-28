#include "hash_tables.h"

/**
 * key_index - returns the index for a specific key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: The index hashed
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
