#include <stdio.h>
/**
  * main - Prints all the single digit numbers of base 10
  *
  * Return: 0 (Always successful)
  */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');

	return (0);
}
