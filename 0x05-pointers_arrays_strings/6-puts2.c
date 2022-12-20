#include "main.h"

/**
 * _puts - prints a string to the standard output
 * @str: the string to be printed
 *
 * Return: void (This function returns no value)
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}

	_putchar('\n');
}
