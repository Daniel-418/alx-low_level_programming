#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: The array to be reversed
 * @n: The number of elements in the array
 *
 * Return: void (This function returns no value)
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	tmp = 0;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = tmp;
	}
}
