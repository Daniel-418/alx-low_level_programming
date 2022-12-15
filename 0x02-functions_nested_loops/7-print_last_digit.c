#include "main.h"
/**
  * print_last_digit - Prints the last digit of an given integer
  * @n: The number which last digit is to be printed
  *
  * Return: The last digit of the number
  */
int print_last_digit(int n)
{
	int k;

	k = n % 10;
	_putchar(k);

	return (k);
}
