#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a specified index
 * @head: the head of the list
 * @idx: the index where the node is to be inserted
 * @n: The value to be inserted
 *
 * Return: the address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx,
		int n)
{
	listint_t *temp, *new, *iterator;
	unsigned int i;

	if ((*head) == NULL)
		return (NULL);

	iterator = *head;
	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (iterator == NULL)
			return (NULL);

		iterator = iterator->next;
	}

	temp = iterator->next;
	iterator->next = new;
	new->next = temp;

	return (new);
}
