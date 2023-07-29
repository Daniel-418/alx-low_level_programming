#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - A function that creates a new dog object
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the dog_t object created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n;

	n = malloc(sizeof(dog_t));

	if (n == 0)
		return (0);

	n->name = name;
	n->age = age;
	n->owner = owner;

	if ((n == 0) || (n->name == 0) || (n->age == 0)
			|| (n->owner == 0))
		return (0);

	return (n);
}
