#include "main.h"
#include <stdio.h>
/**
  * main - tests the code
  * @void: takes no argument
  *
  * Return: 0 (Always success)
  */
int main(void)
{
	fizz_buzz();

	return (0);
}


/**
  * fizz_buzz - prints numbers 1 - 100 with exceptions
  * @void: this function takes no argument
  *
  * Description: When a number to be printed is a multiple of three
  * the function prints fizz, a multiple of nine: buzz, a multiple of
  * three and nine: fizzbuzz.
  * Return: void (this function returns no value)
  */
void fizz_buzz(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("%s ", f);
			continue;
		}
		else if ((i % 5) == 0)
		{
			printf("%s ", b);
			continue;
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("%s ", fb);
			continue;
		}
		else
		{
			printf("%d ", i);
			continue;
		}
	}

	printf("\n");
}
