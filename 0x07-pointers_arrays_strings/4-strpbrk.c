#include "main.h"

/**
 * _strpbrk - searches a stringfor any of a set of bytes
 * @s: the string to be searched
 * @accept: the substring that will be used to search the string
 *
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		unsigned int j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				break;
			}
		}
		if (p != 0)
			break;
	}

	return (p);
}
