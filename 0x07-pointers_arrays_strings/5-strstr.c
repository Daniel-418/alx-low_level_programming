#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to be searched
 * @needle: the substring to be located
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		unsigned int j;

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			p = &haystack[i];
			break;
		}
	}

	return (p);
}
