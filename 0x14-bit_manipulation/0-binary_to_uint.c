#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an integer
 * @b: The binary number to be converted
 *
 * Return: the converted number number or 0 if
 * b is null, if there is a char in b that is not 0
 * or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalNumber;
	int i;

	if (b == NULL)
		return (0);

	decimalNumber = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] - '0' == 0)
			decimalNumber <<= 1;
		else if (b[i] - '0' == 1)
			decimalNumber = (decimalNumber << 1) | 1;
		else
			return (0);
	}

	return (decimalNumber);
}
