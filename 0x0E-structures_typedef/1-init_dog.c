#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initialize a variable
 *
 * @d: Pointer to the dog object
 * @name: String having the dog's name
 * @age: The dog's age
 * @owner: The owner's name
 *
 * Description: Function That defines
 * A data type and returns none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
