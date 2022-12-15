#include "main.h"
/**
  * _abs - Calculates the absolute value of an integer
  * @n: The number to be evaluated
  *
  * Return: The absolute value of the number
  */
int _abs(int n)
{
	int k;

	if (n == 0 || n > 0)
	{
		return (n);
	}
	else
	{
		k = (n - n) - n;
		return (k);
	}
}
