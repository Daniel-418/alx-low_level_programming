#include <stdarg.h>

/**
 * sum_them_all - sums up all the digits passed as arguments
 * @n: The first digit
 * @...: variable number of arguments to be summed
 *
 * Return: the sum of all the numbers passed as arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int total;
	unsigned int i;

	total = 0;
	va_start(ap, n);

	for (i = 0; i < n; i++)
		total += va_arg(ap, int);

	va_end(ap);

	return (total);
}
