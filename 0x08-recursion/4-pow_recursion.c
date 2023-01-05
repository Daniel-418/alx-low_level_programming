#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: the base of the calculation
 * @y: the exponent of the calculation
 *
 * Return: the result of the exponential calculation
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else if (y < 0)
		return (1 / _pow_recursion(x, -y));
	else
		return (x * _pow_recursion(x, (y - 1)));
}
