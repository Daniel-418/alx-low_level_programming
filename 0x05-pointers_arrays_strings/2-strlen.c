#include "main.h"

/**
 * _strlen - calculates the length of the string
 * @s - The string to be calculated
 *
 * Return: The length of the string to be printed
 */
int _strlen(char *s)
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
