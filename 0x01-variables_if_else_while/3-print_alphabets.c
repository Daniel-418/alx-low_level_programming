#include <stdio.h>
/**
  * main - Prints the alphabets in lower and uppercase
  *
  * Return: 0 (Always success)
  */
int main(void)
{
	char lower_alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
	'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
	'u', 'v', 'w', 'x', 'y', 'z'};
	char upper_alphabets[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
	'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
	'U', 'V', 'W', 'X', 'Y', 'Z'};
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(lower_alphabets[a]);
	}

	for (a = 0; a < 26; a++)
	{
		putchar(upper_alphabets[a]);
	}

	putchar('\n');

	return (0);
}
