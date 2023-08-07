#include "main.h"
#include <stdlib.h>
int strlength(char *s);

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in the memory which contains a copy of the given string
 * @str: the string to be copied in the new allocated string
 *
 * Return: a pointer to the new string if successful, null if unsuccessful
 */
char *_strdup(char *str)
{
	int length, i;
	char *newstring;

	if (str == 0)
		return (0);

	length = strlength(str);
	newstring = malloc((sizeof(char) * length) + 1);

	if (newstring == 0)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		newstring[i] = str[i];

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
