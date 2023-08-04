#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: the number of arguments passed on the terminal
 * @argv: a string array of the arguments passed on the terminal
 *
 * Return: 0 if the the multiplication is sucessful
 * 1 if the function does not recieve two arguments
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		exit(0);
	}
}
