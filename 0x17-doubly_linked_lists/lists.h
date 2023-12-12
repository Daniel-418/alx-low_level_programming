#ifndef GUARD_H
#define GUARD_H

#include <stddef.h>
#include <stdio.h>
/** struct for a node of the double linked list **/
/**
 * struct dlistint_s - double linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/** functions **/
size_t print_dlistint(const dlistint_t *h);
#endif
