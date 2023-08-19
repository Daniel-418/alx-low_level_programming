#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: The head node of the linked list
 *
 * Return: The value of the deleted head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);

	temp = *head;
	value = (*head)->n;

	*head = ((*head)->next);

	free(temp);

	return (value);
}
