#include <stdio.h>

/**
  * main - Prints all the numbers of base 16 in lowercase
  *
  * @void: no arguments are passed to this function
  *
  * Return: 0 (Always successful)
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (i = 0; i < 6; i++)
	{
		putchar(i + 'a');
	}

	putchar('\n');

	return (0);
}
