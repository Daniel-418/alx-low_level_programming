#include "main.h"
/**
  * _isupper - Checks if a given character is upper case
  * @c: the character to be checked
  *
  * Return: 1 if it is upper case. 0 if otherwise
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
