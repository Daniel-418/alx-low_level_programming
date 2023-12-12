#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node at a given index in a doubly linked list
 * @head: The head of the list
 * @index: The index at which the node is to be gotten from
 *
 * Return: The node gotten from the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	count = 0;
	temp = head;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);

		count++;
		temp = temp->next;
	}

	return (NULL);
}
