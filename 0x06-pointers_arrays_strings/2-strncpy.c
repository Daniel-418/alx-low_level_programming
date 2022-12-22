#include "main.h"

/**
 * _strncpy - Copies a string to another string
 * @dest: the destination string
 * @src: the source string
 * @n: the limit of string to be copied from src
 *
 * Return: The pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
