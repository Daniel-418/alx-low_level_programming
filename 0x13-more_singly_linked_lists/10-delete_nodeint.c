#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specific index
 * @head: the head of the list
 * @index: the index of the element to be deleted
 *
 * Return: 1 if it succeeds, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *iterator, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	iterator = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (iterator == NULL || iterator ->next == NULL)
			return (-1);

		iterator = iterator->next;
	}

	temp = iterator->next;
	iterator->next = iterator->next->next;
	temp->next = NULL;
	free(temp);

	return (1);
}
