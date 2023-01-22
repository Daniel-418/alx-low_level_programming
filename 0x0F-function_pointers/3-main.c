#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - The main file for the project
 * @argc: The number of arguments passed to the program
 * @argv: The array of strings of the arguments passed to the program
 *
 * Return: The exit status of the program
 */

int main(int argc, char *argv[])
{
	char *op;
	int num1, num2;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
			&& *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	op = argv[2];

	if (num2 == 0 && *op == '/')
	{
		printf("Error\n");
		exit(100);
	}

	p = get_op_func(op);

	printf("%d\n", p(num1, num2));

	return (0);
}
