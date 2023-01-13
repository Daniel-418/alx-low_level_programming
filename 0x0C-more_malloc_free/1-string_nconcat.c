#include "main.h"
#include <stdlib.h>
unsigned int strlength(char *s);

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes to be copied
 *
 * Return: A pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	int i, j, s1length, s2length;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	s1length = strlength(s1);

	if (n >= strlength(s2))
		s2length = strlength(s2);
	else
		s2length = strlength(s2) - (strlength(s2) - n);

	newstring = malloc((sizeof(char) * (s1length + s2length)) + 1);

	if (newstring == 0)
		return (0);

	for (i = 0; i < s1length; i++)
		newstring[i] = s1[i];

	for (j = 0; j < s2length; j++)
		newstring[j + i] = s2[j];
	newstring[s1length + s2length];
	return (newstring);
}

/**
 * strlength - finds the length of a string
 * @s: the string which length is to be found
 *
 * Return: the length of the string
 */
unsigned int strlength(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
