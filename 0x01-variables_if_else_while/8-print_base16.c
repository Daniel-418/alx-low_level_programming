#include <stdio.h>
/**
  * main - Prints all the single digit numbers of base 10
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
