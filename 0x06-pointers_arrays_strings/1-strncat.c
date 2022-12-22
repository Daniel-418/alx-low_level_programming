#include "main.h"
int _length(char *string);

/**
 * _strncat - Concatenates two strings with at most n bytes from the second
 * string
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to be copied from the src string
 *
 * Retrun: dest (The pointer to the resulting string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _length(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * _length - Find the length of a string
 * @string: pointer to the string
 *
 * Return: the length of the string
 */
int _length(char *string)
{
	int len = 0;

	while (*string != '\0')
	{
		len++;
		string++;
	}

	return (len);
}
