#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: pointer to the head of the list
 * @n: the value of the node
 *
 * Return: The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));

	if (new == 0)
		return (0);

	new->n = n;
	new->next = 0;

	if (*head == 0)
	{
		*head = new;
		return (new);
	}
	
	temp = *head;

	while (temp->next != 0)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new);

