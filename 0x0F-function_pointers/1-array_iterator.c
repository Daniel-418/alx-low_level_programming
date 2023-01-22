#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element in an array
 * @array: The array which the operation is to be performed
 * @size: The size of the array
 * @action: The function to be executed
 *
 * Return: void (This function returns no value)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
