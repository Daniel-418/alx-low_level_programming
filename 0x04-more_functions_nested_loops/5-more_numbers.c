#include "main.h"
/**
  * more_numbers - prints numbers 0 to 14 ten times
  * @void: this function takes no argument
  *
  * Return: void (The function returns no value)
  */
void more_numbers(void)
{
	int i, j, tens, unit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				tens = j / 10;
				unit = j % 10;
				_putchar(tens + '0');
				_putchar(unit + '0');
			}
		}

		_putchar('\n');
	}
}
