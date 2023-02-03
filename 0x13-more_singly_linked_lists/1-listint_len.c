#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: The list to be evaluated
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *temp;

	temp = h;
	count = 0;

	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
