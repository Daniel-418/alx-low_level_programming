#include <stdio.h>
/**
  * main - Prints the alphabets in lowercase
  *
  * Return: 0 (Always success)
  */
int main(void)
{
	char alphabets[] = {'a', 'b', 'c', 'd', 'f', 'g', 'h',
	'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't',
	'u', 'v', 'w', 'x', 'y', 'z'};
	int a;

	for (a = 0; a < 24; a++)
	{
		putchar(alphabets[a]);
	}

	putchar('\n');

	return (0);
}
