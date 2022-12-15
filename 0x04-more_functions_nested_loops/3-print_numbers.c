#include "main.h"
/**
  * print_numbers - Prints the numbers 0 to 9
  * @void: this function takes no argument
  *
  * Return: void (the functions returns no value)
  */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');

	_putchar('\n');
}
