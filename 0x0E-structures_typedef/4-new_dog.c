#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: p
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int len1, len2;

	/* reserving memory to struct*/
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	len1 = strlen(name) + 1;
	len2 = strlen(owner) + 1;
	/* Cpunting name pointer*/
	p->name = malloc(sizeof(char) * len1);
	if (name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(sizeof(char) * len2);
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}

	strcpy(p->name, name);
	strcpy(p->owner, owner);
	p->age = age;
	return (p);
}
