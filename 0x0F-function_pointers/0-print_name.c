#include "function_pointers.h"

/**
 * print_name - prints the name of an individual
 * @name: The name of the person to be printed
 * @f: The pointer to the function of the name of the person
 *
 * Return: void (this function returns no value)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
