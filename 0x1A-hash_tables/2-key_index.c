#include "hash_tables.h"

/**
 * key_index - returns the index of an index to be used in a hash table
 * @key: the key(a string) to be indexed
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
