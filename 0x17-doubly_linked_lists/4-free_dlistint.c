#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: The head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
