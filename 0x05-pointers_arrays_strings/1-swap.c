#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: void (This function does not return any value)
 */
void swap_int(int *a, int *b)
{
	 int tmp = *a;
	 *a = *b;
	 *b = tmp;
}
