#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it.
 * @size: The size of the array
 * @c: The char to initialize the array with
 *
 * Return: A pointer to the array if successful, Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (0);

	array = (char *)malloc(sizeof(int) * size);

	if (array == 0)
		return (0);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
