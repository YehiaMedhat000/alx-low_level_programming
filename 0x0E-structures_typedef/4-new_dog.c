#include "dog.h"
#include <stdlib.h>
#include <string.h>
#define len(x) (strlen(x) + 1)

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
	/* reserving memory to struct*/
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	/* Cpunting name pointer*/
	p->name = malloc(sizeof(char) * len(name));
	if (name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(sizeof(char) * len(owner));
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	
	_strcpy(p->name, name);
	_strcpy(p->owner, owner);
	p->age = age;
	return (p);
}
