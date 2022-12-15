#include "main.h"
/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: number of times the character \ is printed
  *
  * Return: void (This function returns no value)
  */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
				_putchar('\\');
			else
			{
				for (j = 0; j < i; j++)
					_putchar(' ');

				_putchar('\\');
			}

			_putchar('\n');
		}
	}
}
