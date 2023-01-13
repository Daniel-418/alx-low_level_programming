#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of integer worth memory to be allocated
 *
 * Return: void * The pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(int) * b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
