#include "main.h"
void swap_char(char *a, char *b);
int _strlen(char *s);
/** 
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return - void (This function returns no value)
 */
void rev_string(char *s)
{
	int size;
	int i;

	size = _strlen(s);

	for (i = 0; i < (size / 2); i++)
	{
		swap_char((s+i), (s + (size - (i + 1))));
	}
}

/**
 * swap_char - Swaps the value of two characters
 * @a: the first character
 * @b: the second character
 *
 * Return: void (This function does not return any value)
 */
void swap_char(char *a, char *b)
{
	 char tmp = *a;
	 *a = *b;
	 *b = tmp;
}

/**
 * _strlen - calculates the length of the string
 * @s: The string to be calculated
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
