#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - prints a bi directional list
 * @h: The list to be printed
 * 
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *temp;

	temp = h;
	count = 0;

	for (count = 0; temp != NULL; count++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
