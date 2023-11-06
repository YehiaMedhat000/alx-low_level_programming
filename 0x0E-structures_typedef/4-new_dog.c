#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog object
 * @name: String of the dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: Pointer to the dog object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(d);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(d);
		free(name);
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);

}
