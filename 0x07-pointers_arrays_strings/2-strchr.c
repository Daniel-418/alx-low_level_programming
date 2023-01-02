#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched for the character
 * @c: the character to be searched
 *
 * Return: The pointer to the first occurence of the character c
 * in the string s or NULL if the character isn't found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	return (NULL);
}
