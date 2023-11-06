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
	char *name_copy, *owner_copy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name == NULL)
		free(name);
	if (owner == NULL)
		free(owner);

	name_copy = name;
	owner_copy = owner;

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;
	return (d);

}
