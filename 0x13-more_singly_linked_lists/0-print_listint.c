#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints a list of integer
 * @h: The head node of the list
 *
 * Return: The number of nodes in this list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *temp;

	if (h == 0)
		exit(0);

	temp = h;
	count = 0;

	while (temp != 0)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
