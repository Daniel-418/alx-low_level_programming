#include "lists.h"

/**
 * dlistint_len - Gets the number of elements in a doubly linked list
 * @h: The head of the list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count;

	if (h == NULL)
		return (0);

	temp = h;
	count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
