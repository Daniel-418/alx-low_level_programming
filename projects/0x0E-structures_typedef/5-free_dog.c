#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dog
 * @d: the dog object
 *
 * Return: void (This function returns no value)
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
