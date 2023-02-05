#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets a node at a specified index
 * @head: The head of the node
 * @index: The specified index
 *
 * Return: The node at the specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;

	for (i = 0; i <= index; i++)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
	}

	return (temp);
}
