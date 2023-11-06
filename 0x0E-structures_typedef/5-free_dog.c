#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - releases the memory
 * occupied by a dog object
 * @d: Pointer to the dog object
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
