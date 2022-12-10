#include <stdio.h>
/**
  * main: Prints all possible combinations of single
  *		digit numbers.
  *
  * @void: The main function takes no argument
  *
  * Return: 0 (Always successful)
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	return (0);
}
