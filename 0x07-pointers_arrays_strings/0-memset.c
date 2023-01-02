#include "main.h"

/**
 * _memset - fills the specified memory area by a constant byte
 * @s: The memory area to be filled
 * @b: The value to be filled in the memory area
 * @n: The amount of bytes to be filled in the memory area pointed by s
 *
 * Return: The pointer to the memory area that has been filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
