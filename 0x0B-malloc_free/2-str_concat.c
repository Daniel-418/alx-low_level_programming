#include "main.h"
#include <stdlib.h>
int strlength(char *s);

/**
 * str_concat - Function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to a newly allocated space in memory which contains
 * the contents of s1 followed by the contents of s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *newstring;
	int i, j, s1length, s2length;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	s1length = strlength(s1);
	s2length = strlength(s2);

	newstring = malloc((sizeof(char) * (s1length + s2length)) + 1);

	if (newstring == 0)
		return (0);

	for (i = 0; i < s1length; i++)
		newstring[i] = s1[i];

	for (j = 0; j < s2length; j++)
		newstring[j + i] = s2[j];

	return (newstring);
}

/**
 * strlength - finds the length of a string
 * @s: the string which length is to be found
 *
 * Return: the length of the string
 */
int strlength(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;

	return (i);
}
