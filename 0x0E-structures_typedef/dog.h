#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Data type that defines dog objects
 * @name: The dog's name
 * @owner: The dog's owner's name
 * @age: The dog's age
 *
 * Describtion: Data type for defining dog objects which 
 * could be used in datasets later and building them 
 * efficiently
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif
