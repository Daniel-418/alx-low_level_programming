#include "main.h"
/**
  * print_triangle - prints a triangle on the terminal
  * @size: the size of the triangle to be printed
  *
  * Return: void (returns no value)
  */
void print_triangle(int size)
{
	int i, j, k;

	if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}

	else if (size > 1)
	{
		for (i = (size - 1); i >= 0; i--)
		{
			for (j = 0; j < i; j++)
			{
				if (i == 0)
					continue;
				else
					_putchar(' ');
			}

			for (k = 0; k < (size - i); k++)
				_putchar('#');

			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
