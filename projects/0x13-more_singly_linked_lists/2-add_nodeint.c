#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: pointer to the head of the node
 * @n: the value that the new node contains
 *
 * Return: pointer to the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = (*head);
	*head = new;

	return (*head);
}
