#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function to print a dog struct
 * @d: The dog struct that is to be printed
 *
 * Return: void (This function does not return any value)
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\n", (d->name == 0) ? "(nil)" : d->name);
		if (d->age == 0)
			printf("Age: %s\n", "(nil)");
		else
			printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == 0) ? "(nil)" : d->owner);
	}
}
