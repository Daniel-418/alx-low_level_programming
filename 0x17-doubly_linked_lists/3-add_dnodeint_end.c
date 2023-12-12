#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end of a doubly linked list
 * @head: The head of the list
 * @n: The value to be added
 *
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = NULL;

	return (new_node);
}
