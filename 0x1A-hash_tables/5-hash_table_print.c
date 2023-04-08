#include "hash_tables.h"
void print_linked_list(hash_node_t *linkedlist, int last);

/**
 * hash_table_print - prints a hash table
 * @ht: The hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i;
	int flag;
	hash_node_t *temp;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				while (temp != NULL)
				{
					if (flag == 1)
						printf(", ");
					printf("'%s': '%s'", temp->key, temp->value);
					flag = 1;
					temp = temp->next;
				}
			}
			else
				continue;
		}
		printf("}\n");
	}
}
