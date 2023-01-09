#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates an initializes a 2D array
 * @width: The amounts of columns the array should contain
 * @height: The amounts of rows the array should contain
 *
 * Return: a pointer to a 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **newarray;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);

	newarray = malloc(sizeof(int *) * height);

	if (newarray == 0)
		return (0);

	for (i = 0; i < height; i++)
		*(newarray + i) = malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			newarray[i][j] = 0;
	}

	return (newarray);
}