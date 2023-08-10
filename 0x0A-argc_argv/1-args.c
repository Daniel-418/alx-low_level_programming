#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print the number of arguments passed to it
 * @argc: the number of arguments passed into the program
 * @argv: the array of strings passed into the program
 *
 * Return: 0 if successful, 1 if not.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		*argv[i] = *argv[i];
		sum++;
	}

	printf("%d\n", sum - 1);

	exit(0);
}
