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
	hash_node_t *node, *tmp;
	char *new_value;

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
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}

	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
