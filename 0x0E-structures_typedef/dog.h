#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Data type that defines a dog
 * @name: The dog's name
 * @owner: The dog's owner's name
 * @age: The dog's age
 *
 * Describtion: Data type for defining dog objects
 * Could be used in datasets
 * later and building them efficiently
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dot_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
