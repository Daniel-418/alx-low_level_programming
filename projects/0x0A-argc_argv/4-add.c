#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - add positives numbers passed in the terminal
 * @argc: the number of arguments passed
 * @argv: a string array of the arguments passed
 *
 * Return: 0 if successful, 1 if unsuccessful
 */
int main(int argc, char *argv[])
{
	int i, j, n, sum = 0, flag = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		exit(1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				flag = 1;
				break;
			}
		}

		if (flag)
		{
			printf("Error\n");
			exit(1);
		}

		n = atoi(argv[i]);
		sum += n;
	}

	printf("%d\n", sum);
	exit(0);
}
