#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the square matrix of integers
 */
void print_diagsums(int *a, int size)
{
	int i, sumof1diag = 0, sumof2diag = 0;

	for (i = 0; i < size; i++)
		sumof1diag += *(a + (i * size) + i);

	for (i = 0; i < size; i++)
		sumof2diag += *(a + (i * size) + (size - 1 - i));

	printf("%d, %d\n", sumof1diag, sumof2diag);
}
