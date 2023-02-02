#include "lists.h"
#include <stdlib.h>
#include <string.h>
unsigned int _strlen(char *str);

/**
 * add_node_end - adds a node to the end of a list
 * @head: the head of the list
 * @str: the string that the node is supposed to contain
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));

	if (new == 0)
		return (0);

	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = 0;

	if (*head == 0)
		*head = new;

	temp = *head;

	while (temp->next != 0)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new);
}

/**
 * _strlen - calculates the length of a string
 * @str: the string to be calculated
 *
 * Return: the length of the str
 */
unsigned int _strlen(char *str)
{
	unsigned int count;

	for (count = 0; str[count] != '\0'; count++)
		str[count] = str[count];

	return (count);
}
