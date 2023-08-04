#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its own name
 * @argc: the count of the arguments
 * @argv: the string array to be passed on the terminal
 *
 * Return: 0 if successful, 1 if otherwise
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	exit(0);
}
