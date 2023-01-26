#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers separated by a separator
 * @separator: The separator to be printed
 * @n: the amount of numbers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(ap, int),
				(separator == 0) ? "" : separator);
	}

	printf("%d\n", va_arg(ap, int));

	va_end(ap);
}
