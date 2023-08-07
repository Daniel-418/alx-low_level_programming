#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum amount of values
 * @max: maximum amount of values
 *
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (0);

	array = (int *) malloc(sizeof(int) * (max - min + 1));

	if (array == 0)
		return (0);

	for (i = min; i <= max; i++)
		array[i - min] = i;

	return (array);
}
