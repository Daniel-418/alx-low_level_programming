#include "main.h"
int _length(char *s);

/**
 * puts_half - prints the second half of a string
 * @str: The string which half is to be printedj
 *
 * Return: void (This function returns no value)
 */
void puts_half(char *str)
{
	int halfsize;
	int size;
	int i;

	size = _length(str);

	if (size % 2 == 0)
		halfsize = size / 2;
	else if (size % 2 == 1)
		halfsize = (size + 1) / 2;

	for (i = halfsize; i < size; i++)
		_putchar(*(str + i));

	_putchar('\n');
}

/**
 * _length - calculates the length of the string
 * @s: The string to be calculated
 *
 * Return: The length of the string to be printed
 */
int _length(char *s)
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
