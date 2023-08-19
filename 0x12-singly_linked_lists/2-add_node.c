#include <stdlib.h>
#include "lists.h"
#include "string.h"

unsigned int _strlen(char *str);

/**
 * add_node - adds a node to the beginning of a list
 * @head: The list head
 * @str: The data to be added
 *
 * Return: pointer to the beginning of the list if sucessful, 0 if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == 0)
		return (0);

	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;

	if (new->str == 0 || new->len == 0 || new->next == 0)
		return (0);

	return (new);
}

/**
 * _strlen - calculates the length of a string
 * @str: the string to be calculated
 *
 * Return: the length of the str */
unsigned int _strlen(char *str)
{
	unsigned int count;

	for (count = 0; str[count] != '\0'; count++)
		str[count] = str[count];

	return (count);
}
