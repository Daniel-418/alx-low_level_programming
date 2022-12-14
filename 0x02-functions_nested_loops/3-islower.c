#include "main.h"
/**
  * _islower - Checks if a letter is lowercase
  * @c: The character to be checked
  *
  * Return: 1 If the character is lower case. 0 otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
