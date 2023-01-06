#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program to print all it's argument
 * @argc: the number of arguments
 * @argv: the string array of the arguments
 *
 * Return: 0 if successful, 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	exit(0);
}
