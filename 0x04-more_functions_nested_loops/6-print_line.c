#include "main.h"
/**
  * print_line - prints a straigh line on the terminal
  * @n: the length of the line to be printed
  *
  * Return: void (The function returns no value)
  */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
		_putchar('\n');
}
