#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of the list
 * @head: pointer to the head of the list
 * @n: The value to be added
 *
 * Return: The address of the new node created.
 */
dlistint_t *add_dnodeint(dlistint_t **head, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	temp->prev = new_node;
	new_node->next = temp;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
