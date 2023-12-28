#include "hash_tables.h"

/**
 * hash_table_set - adds a key value to the hash table
 * @ht: The hashtable
 * @key: The key
 * @value: The value
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size <= 0)
		return (0);
	if (*key == '\0')
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
}
