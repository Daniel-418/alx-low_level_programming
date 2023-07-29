#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums up all the values in a list of integers
 * @head: The head of the list
 *
 * Return: The sum of all the values in the list
 */
int sum_listint(listint_t *head)
{
	int total;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	total = 0;

	while (temp != NULL)
	{
		total += temp->n;
		temp = temp->next;
	}

	return (total);
}
