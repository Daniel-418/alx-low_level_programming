#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: The array which elements is to be printed.
 * @n: The number of elements of the array to be printed
 *
 * Return: void (This function returns no value)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));

	}
}
