#include "main.h"

/**
 * print_times_table - function that prints the times table of a given integer
 * @n: The number whose time table is to be printed
 *
 * Return: void(This function does not return any value)
 */
void print_times_table(int n)
{
	int row;
	int column;
	int product;
	int product_tens;
	int product_hundreds;
	int product_unit;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar(0 + '0');
			_putchar(',');
			_putchar(' ');
			for (column = 1; column <= n; column++)
			{
				product = row * column;
				product_hundreds = product / 100;
				product_tens = product % 100 / 10;
				product_unit = product % 100 % 10;
				if (product_hundreds != 0)
					_putchar(product_hundreds + '0');
				else
					_putchar(' ');
				if (!(product_hundreds == 0 && product_tens == 0))
					_putchar(product_tens + '0');
				else
					_putchar(' ');
				_putchar(product_unit + '0');
				if (column != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	}
}
