#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to area dest
 * @dest: the destination of the copy operation
 * @src: the source of the copy operation
 * @n: the number of bytes to be copied
 *
 * Return: The pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
