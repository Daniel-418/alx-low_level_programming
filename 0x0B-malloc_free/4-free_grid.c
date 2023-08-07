#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory of a 2D array.
 * @grid: The array to be freed
 * @height: the amount of the rows of the array
 *
 * Return: void (This function returns no value)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
