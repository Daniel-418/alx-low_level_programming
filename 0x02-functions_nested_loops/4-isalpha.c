#include "main.h"
/**
  * _isalpha - checks if a character is an alphabet
  * @c: The character to be checked
  *
  * Return: 1 if the letter is a letter. 0 if otherwise
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 95 && c <= 122))
		return (1);
	else
		return (0);
}
