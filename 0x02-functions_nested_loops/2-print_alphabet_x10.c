#include "main.h"

/**
  * print_alphabet_x10 - Prints the lowercase alphabet ten times
  * @void: this function does not take any argument
  *
  * Return: This function does not return any value
  */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar('a' + j);
		}

		_putchar('\n');
	}
}
