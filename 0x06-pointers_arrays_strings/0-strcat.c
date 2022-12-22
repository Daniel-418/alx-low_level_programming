#include "main.h"
int _length(char *string);

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string which the src string is to be concatenated to
 * @src: The source string to be concatenated to dest
 *
 * Return: dest (A pointer to the resulting string)
 */
char *_strcat(char *dest, char *src)
{
	int destlength, srclength, i;

	destlength = _length(dest);
	srclength = _length(src);

	for (i = 0; i < srclength; i++)
	{
		*(dest + (destlength + i)) = *(src + i);
	}

	*(dest + (destlength - 1) + srclength) = '\0';

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
