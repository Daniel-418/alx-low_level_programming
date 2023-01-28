#ifndef GUARD_
#define GUARD_
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#endif
/**
 * print_list - prints all the elements in a list
 * @h: The head of the list
 *
 * Return: The number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t size;
	const list_t *temp;

	temp = h;

	for (size = 0; temp != 0; size++)
	{
		printf("[%d] %s\n", (temp->str == 0) ? 0 : temp->len,
				(temp->str == 0) ? "(nil)" : temp->str);
		temp = temp->next;
	}

	return (size);
}
