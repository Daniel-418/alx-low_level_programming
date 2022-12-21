#include "main.h"
int _length(char *s);

/**
 * _strcpy - Copies a string into another string
 * @dest: The destination string. Where the source string will be copied to
 * @src: The source string to be copied
 *
 * Return: the pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, size;

	size = _length(src);

	for (i = 0; i <= size; i++)
		*(dest + i) = *(src + i);

	return (dest);
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
