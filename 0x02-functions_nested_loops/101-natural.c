#include "main.h"
#include <stdio.h>

/**
 * main - prints out all the sums of 3 and 5
 * @void: This function takes no arguments
 *
 * Return: 0 if successful, 1 if fail
 */
int main(void)
{
	int i;
	int total;

	total = 0;
	for (i = 1; i < 1024; ++i)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			total += i;
	}

	printf("%d\n", total);
	return (0);
}
