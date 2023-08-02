#include "main.h"
int _sqrt_recursion_helper(int n, int i);

/**
 * _sqrt_recursion - recursively finds the square root of a number
 * @n: the number whose square root is to be found
 *
 * Return: the natural square root of a number if found.
 * -1 if the number has no square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}

/**
 * _sqrt_recursion_helper - an helper method to recursively find the
 * square root of a number.
 * @n: the number which square root is to be found.
 * @i: the guess
 *
 * Return: the natural square root of a number if found.
 * -1 if the number has no square root.
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, i + 1));
}
