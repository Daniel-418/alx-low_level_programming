#include "main.h"
int _stringlen(char *s);
/**
 * print_rev - prints a string in reverse
 * @s: The string to be reversed
 *
 * Return: void (This function does not return any value)
 */
void print_rev(char *s)
{
	int size;
	int i;

	size = _stringlen(s);

	for (i = size - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

/**
 * _stringlen - finds the length of a string
 * @s: The string whose length is to be found
 *
 * Return: the length of the string
 */
int _stringlen(char *s)
{
	char *control;
	int counter;

	counter = 0;
	control = s;

	do {
		control = (s + counter);
		++counter;
	} while (*control != '\0');

	return (counter - 1);
}
