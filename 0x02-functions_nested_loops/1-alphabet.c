#include "main.h"

/**
  * print_alphabet - Prints the english alphabets in lowercase
  * @void: takes no parameters
  *
  * Return: does not return any value
  */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar('a' + i);
	}

	_putchar('\n');
}
