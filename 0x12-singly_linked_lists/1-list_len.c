#include <stdlib.h>
#include "lists.h"

/**
 * list_len - calculates the amount of elements inside a list
 * @h: The list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int count;

	count = 0;

	while (h->next != 0)
	{
		count++;
		h = h->next;
	}

	return (count + 1);
}
