#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of coins
 * @argc: the number of arguments passed
 * @argv: an array of string of the number of arguments passed
 *
 * Return: 0 if successful, 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}

	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}

	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}

	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}

	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}

	printf("%d\n", coins);
	return (0);
}
