#include "main.h"

/**
 * _strlen_recursion - finds and returns the length of the string
 * @s: The string which length is to be returned
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	i = 1 + _strlen_recursion(s + 1);

	return (i);
}
