#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count;

	if (h == NULL)
		return (0);

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
