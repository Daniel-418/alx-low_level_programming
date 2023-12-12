#include "lists.h"

/**
 * sum_dlistint - sums up all the element of a doubly linked list
 * @head: The head of the list
 *
 * Return: The sum of all the elements in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int count;
	dlistint_t *temp;

	if (head == NULL)
		return (0);

	count = 0;
	temp = head;

	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}

	return (count);
}
